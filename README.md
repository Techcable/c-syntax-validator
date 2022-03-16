csyntax-validator
=================
A simple command line tool to validate C syntax.

This is needed because [pycparser](https://github.com/eliben/pycparser) gives *atrocious* error messages.

Uses the [Antlr4](https://www.antlr.org) parser generator and the grammar from the [antlr/grammars-v4](https://github.com/antlr/grammars-v4) repo.

**TODO:**
- Port to C++ (see the `port/c++` branch)
