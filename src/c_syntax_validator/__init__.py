from dataclasses import dataclass
from enum import Enum

import antlr4

from .parser.CLexer import CLexer
from .parser.CParser import CParser


class InputTarget(Enum):
    EXPRESSION = "expr"
    STATEMENT = "stmt"
    BLOCK_BODY = "block-body"
    FILE = "file"


class Location:
    __slots__ = "line", "column"
    line: int
    column: int

    def __init__(self, line: int, column: int):
        assert line > 0
        assert column >= 0
        self.line = line
        self.column = column

    def __str__(self):
        return f"{self.line}:{self.column}"


@dataclass
class ErrorMessage:
    location: Location
    msg: str

    def __str__(self):
        return f"line {self.location} {self.msg}"


class InvalidCodeException(Exception):
    reasons: list[ErrorMessage]

    def __init__(self, reasons: list[str]):
        super().__init__("Invalid code")
        assert reasons, "Empty reasons"
        self.reasons = reasons

    def __str__(self):
        return "\n".join(map(str, self.reasons))


class ValidatorErrorListener(antlr4.error.ErrorListener.ErrorListener):
    msgs: list[ErrorMessage]

    def __init__(self):
        self.msgs = []

    def syntaxError(self, recognizer, offendingSymbol, line, column, msg, e):
        self.msgs.append(ErrorMessage(location=Location(line, column), msg=msg))


def validate_text(text: str, target: InputTarget):
    assert isinstance(text, str)
    return _validate_antlr_input_stream(antlr4.InputStream(text), target)


def _validate_antlr_input_stream(stream: antlr4.InputStream, target: InputTarget):
    assert isinstance(stream, antlr4.InputStream)
    assert isinstance(target, InputTarget)
    lexer = CLexer(stream)
    tokens = antlr4.CommonTokenStream(lexer)
    parser = CParser(tokens)
    listener = ValidatorErrorListener()
    parser.removeErrorListeners()
    parser.addErrorListener(listener)
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
