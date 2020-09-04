			CSE 313: Compiler Construction
				Project

A calculator build with Lex & Yacc. It was developed in Flex Windows.
It takes Input of Numbers and Characters and outputs the arithmetic results
and show errors for unreasonable operations or syntax.

Functionalities:
-----------------
	1)It can performs basic arithmetic operations e.g(+,-,/,*,->)
	2)It can allocate values on variables (X->5)
	3)It can perform basic arithmetic operations on parenthesis e.g((2+3)+5)
	4)It can Print variables using PRINT e.g(PRINT Y)
	5)It can how various errors on cases:   *No value assigned on variable
					 	*Unexpected Command
					 	*Hello Class
					 	*Unbalanced Parenthesis
					 	*ID is succeeded by ID, OP is expected
					 	*OP is followed by OP,ID OR NUM IS EXPECTED
					        *Starting with OP,ID or NUM is expected

How to Build & Compile:
------------------------

For Flex:
	1)Open the projectCalculator.l and projectCalculator.y in EditorPlus
	2)Click on Tools
	3)Click on Tools->Lex File Compile
	4)Click on Tools->Lex Build
	5)Click on Tools->Yacc Compile
	6)Click on Tools->Lex+Yacc Build
	7)Click on Tools->Execute exe directly

For Linux:
	1)Go to terminal
	2)type command: lex projectCalculator.l
	3)type command: lex projectCalculator.y
	4)type command: gcc -o example y.tab.c
	5)type command: ./projectCalculator

How to Run: 
------------
	1)By directly opening projectCalculator.exe
	2)Go to Flex->Tools->Execute exe directly
	3)(Linux) Go to Terminal->command: ./projectCalculator

Known Bugs:
------------
	1)It cannot properly function with parenthesis e.g((2+3)-4)
	2)Cannot handle errors on parenthesis

