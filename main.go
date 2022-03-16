package main

import (
	"github.com/antlr/antlr4/runtime/Go/antlr"
	"github.com/Techcable/c-syntax-validator/parser"
    "os"
)

func main() {
    // TODO: What does this second arg do?
    input, _ := antlr.NewFileStream(os.Args[1])
    lexer := parser.NewCLexer(input)
    stream := antlr.NewCommonTokenStream(lexer,0)
    p := parser.NewCParser(stream)
    p.AddErrorListener(antlr.NewDiagnosticErrorListener(true))
	p.BuildParseTrees = true
    p.CompilationUnit()
}

