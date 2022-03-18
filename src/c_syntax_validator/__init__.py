from enum import Enum
import io

import antlr4

from .parser.CLexer import CLexer
from .parser.CParser import CParser


class InputTarget(Enum):
    EXPRESSION = "expr"
    STATEMENT = "stmt"
    BLOCK_BODY = "block-body"
    FILE = "file"


class InvalidCodeException(Exception):
    reasons: list[str]

    def __init__(self, reasons: list[str]):
        super().__init__("Invalid code")
        assert reasons, "Empty reasons"
        self.reasons = reasons

    def __str__(self):
        return "\n".join(self.reasons)


class ValidatorErrorListener(antlr4.error.ErrorListener.ErrorListener):
    msgs: list[str]

    def __init__(self):
        self.msgs = []

    def syntaxError(self, recognizer, offendingSymbol, line, column, msg, e):
        self.msgs.append(f"line {line}:{column} {msg}")


def validate_text(text: str, target: InputTarget):
    assert isinstance(text, str)
    return _validate_antlr_input_stream(antlr4.InputStream(text), target)

class InternalState:
    __slots__ = "lexer", "parser", "listener"
    lexer: CLexer
    listener: ValidatorErrorListener
    parser: CParser

    def __init__(self, lexer, tokens, parser):
        self.lexer = lexer
        self.parser = parser
        self.listener = None

    @staticmethod
    def create(stream: antlr4.InputStream) -> "InternalState":
        lexer = CLexer(stream)
        tokens = antlr4.CommonTokenStream(lexer)
        parser = CParser(tokens)
        state = InternalState(lexer, tokens, parser)
        state.reset_errors()
        return state

    def reset(self, stream: antlr4.InputStream):
        self.lexer.inputStream = stream
        tokens = antlr4.CommonTokenStream(self.lexer)
        self.parser.setTokenStream(tokens)
        self.reset_errors()

    def reset_errors(self):
        self.listener = ValidatorErrorListener()
        self.parser.removeErrorListeners()
        self.parser.addErrorListener(self.listener)

_INTERNAL_STATE = None

def _validate_antlr_input_stream(stream: antlr4.InputStream, target: InputTarget):
    assert isinstance(stream, antlr4.InputStream)
    assert isinstance(target, InputTarget)
    global _INTERNAL_STATE
    if _INTERNAL_STATE is None:
        _INTERNAL_STATE = InternalState.create(stream)
    else:
        _INTERNAL_STATE.reset(stream)
    parser = _INTERNAL_STATE.parser
    listener = _INTERNAL_STATE.listener
    if target == InputTarget.EXPRESSION:
        parser.expression()
    elif target == InputTarget.STATEMENT:
        parser.statement()
    elif target == InputTarget.BLOCK_BODY:
        parser.blockItemList()
    elif target == InputTarget.FILE:
        parser.compilationUnit()
    else:
        raise AssertionError(str(target))

    if listener.msgs:
        raise InvalidCodeException(listener.msgs)
