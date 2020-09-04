%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <ctype.h> 

	
	int symbolMap[52];

	int fetchValue(char id);
	void insertValue(char id, int val);
	int findIndex(char id);
	void yyerror(char *msg);
	extern int yylex();
%}

%start run
%union {int num; char id;}
%type <num> load start expr pow mult div add var term
%token <num> NUMBER ENDLINE ASSIGN QUIT
%token <id> LETTER	

%%

run	: QUIT				{return 0;}
	| load run		
	;
load	: start ENDLINE			{printf("%d\n", $1);}
	;
start	: LETTER ASSIGN expr 		{$$ = $3; insertValue($1, $3);}
	| expr				{$$ = $1;}
	;
expr	: expr expr			{yyerror("ID IS SUCCEEDED BY ID, OP IS EXPECTED");}
	| expr expr '->' pow		{yyerror("ID IS SUCCEEDED BY ID, OP IS EXPECTED");}
	| expr '->' '->' pow		{yyerror("OP IS FOLLOWED BY OP, ID OR NUM IS EXPECTED");}
	| expr '->' '->' expr '->' pow 	{yyerror("OP IS FOLLOWED BY OP, ID OR NUM IS EXPECTED");}
	| '->' expr '->' pow 		{yyerror("STARTING WITH OP, ID OR NUM IS EXPECTED");}
	| expr '->' pow	'->'		{yyerror("OP IS FOLLOWED BY OP, ID OR NUM IS EXPECTED");}
	| expr '->' pow			{$$ = $1 ^ $3;}
	| pow				{$$ = $1;}
	;
pow	: pow pow			{yyerror("ID IS SUCCEEDED BY ID, OP IS EXPECTED");}
	| pow pow '*' mult		{yyerror("ID IS SUCCEEDED BY ID, OP IS EXPECTED");}
	| pow '*' '*' mult		{yyerror("OP IS FOLLOWED BY OP, ID OR NUM IS EXPECTED");}
	| pow '*' '*' pow '*' mult 	{yyerror("OP IS FOLLOWED BY OP, ID OR NUM IS EXPECTED");}
	| '*' pow '*' mult 		{yyerror("STARTING WITH OP, ID OR NUM IS EXPECTED");}
	| pow '*' mult '*'		{yyerror("OP IS FOLLOWED BY OP, ID OR NUM IS EXPECTED");}
	| pow '*' mult			{$$ = $1 * $3;}
	| mult				{$$ = $1;}
	;
mult	: mult mult			{yyerror("ID IS SUCCEEDED BY ID, OP IS EXPECTED");}
	| mult mult '/' div		{yyerror("ID IS SUCCEEDED BY ID, OP IS EXPECTED");}
	| mult '/' '/' div		{yyerror("OP IS FOLLOWED BY OP, ID OR NUM IS EXPECTED");}
	| mult '/' '/' mult '/' div 	{yyerror("OP IS FOLLOWED BY OP, ID OR NUM IS EXPECTED");}
	| '/' mult '/' div 		{yyerror("STARTING WITH OP, ID OR NUM IS EXPECTED");}
	| mult '/' div	'/'		{yyerror("OP IS FOLLOWED BY OP, ID OR NUM IS EXPECTED");}
	| mult '/' div			{$$ = $1 / $3;}
	| div				{$$ = $1;}
	;
div	: div div			{yyerror("ID IS SUCCEEDED BY ID, OP IS EXPECTED");}
	| div div '+' add		{yyerror("ID IS SUCCEEDED BY ID, OP IS EXPECTED");}
	| div '+' '+' add		{yyerror("OP IS FOLLOWED BY OP, ID OR NUM IS EXPECTED");}
	| div '+' '+' div '+' add 	{yyerror("OP IS FOLLOWED BY OP, ID OR NUM IS EXPECTED");}
	| '+' div '+' add 		{yyerror("STARTING WITH OP, ID OR NUM IS EXPECTED");}
	| div '+' add '+'		{yyerror("OP IS FOLLOWED BY OP, ID OR NUM IS EXPECTED");}
	| div '+' add			{$$ = $1 + $3;}
	| add				{$$ = $1;}
	;
add	: add add			{yyerror("ID IS SUCCEEDED BY ID, OP IS EXPECTED");}
	| add add '-' var		{yyerror("ID IS SUCCEEDED BY ID, OP IS EXPECTED");}
	| add '-' '-' var		{yyerror("OP IS FOLLOWED BY OP, ID OR NUM IS EXPECTED");}
	| add '-' '-' add '-' var 	{yyerror("OP IS FOLLOWED BY OP, ID OR NUM IS EXPECTED");}
	| '-' add '-' var 		{yyerror("STARTING WITH OP, ID OR NUM IS EXPECTED");}
	| add '-' var '-'		{yyerror("OP IS FOLLOWED BY OP, ID OR NUM IS EXPECTED");}
	| add '-' var			{$$ = $1 - $3;}
	| var				{$$ = $1;}
	;
var	: term ')'			{yyerror("UNBALANCED PARENTHESES");}
	| '(' term			{yyerror("UNBALANCED PARENTHESES");}
	| '(' '(' term			{yyerror("UNBALANCED PARENTHESES");}
	| term ')' ')'			{yyerror("UNBALANCED PARENTHESES");}
	| '(' '(' '(' term		{yyerror("UNBALANCED PARENTHESES");}
	| term ')' ')' ')'		{yyerror("UNBALANCED PARENTHESES");}
	| '(' term ')'			{$$ = ($2);}
	| term				{$$ = $1;}
	;
term	: LETTER			{$$ = fetchValue($1);}
	| NUMBER			{$$ = $1;}
	;

%%

int fetchValue(char id){
	int index = findIndex(id);

	return symbolMap[index];
}

void insertValue(char id, int val){
	int index = findIndex(id);

	symbolMap[index] = val;
}

int findIndex(char id){
	if(islower(id))
		return id - 'a';
	else return id - 'A' + 25;
}


int main(){
	int i;

	
	for(i = 0; i < 52; ++i)
		symbolMap[i] = 0;

	yyparse();

	return 0;
}

void yyerror(char *msg){
	fprintf(stderr, "%s\n", msg);
}
