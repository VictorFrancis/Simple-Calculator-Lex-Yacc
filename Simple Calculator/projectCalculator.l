%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "y.tab.h" 
%}

%%

[a-zA-Z]	{yylval.id = yytext[0]; return LETTER;}
[0-9][0-9]*	{yylval.num = atoi(yytext); return NUMBER;}
"\n"		{return ENDLINE;}	
"<-"		{return ASSIGN;}
"PRINT"		{ECHO; printf("PRINTING", 0, yytext[0]);}
[()]		{return yytext[0];}
[->]		{return yytext[0];}
[/*]		{return yytext[0];}
[+-]		{return yytext[0];}
"EXIT"		{return QUIT;}
[ \t]		;
.		{ECHO; printf("Unexpected Symbol\n");}
"SQRT"		{ECHO; printf("Unexpected Command\n");}
"HELLO"		{ECHO; printf("Unexpected Command\n");}
"CLASS"		{ECHO; printf("Unexpected Command\n");}
"SUB"		{ECHO; printf("Unexpected Command\n");}


%%

int yywrap()
{
	return 1;
}
