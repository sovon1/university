# CSTE-3108: Compiler Construction Lab 🛠️

**Credits:** 1.5
**Environment:** Linux (Flex, Bison, GCC)

## Lab Experiments
1.  **Lexical Analysis:**
    *   Token recognition (Keywords, Identifiers, Operators).
    *   Comment removal.
    *   Regular expression validation (Email, Phone numbers).
2.  **Syntax Analysis:**
    *   Removing Left Recursion.
    *   Computing FIRST and FOLLOW sets.
    *   Predictive Parsing Table.
    *   Shift-Reduce Parsing.
3.  **YACC/Bison:**
    *   Calculator implementation (Infix to Postfix/Prefix).
    *   Operator precedence handling.
    *   Abstract Syntax Tree (AST) generation.
4.  **Code Generation:**
    *   Intermediate Code (Quadruples/Triples).
    *   Target machine code generation.

## How to Run
```bash
flex scanner.l
bison -d parser.y
gcc lex.yy.c parser.tab.c -o compiler
./compiler < input.txt
```
