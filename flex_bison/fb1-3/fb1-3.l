/* Recognize tokens for the calculator and then print them out */
%%
"+"	{ printf("PLUS\n"); }
"-"	{ printf("MINUS\n"); }
"*"	{ printf("MULTIPLY\n"); }
"/"	{ printf("DIVIDE\n"); }
"|"	{ printf("ABS\n"); }
[0-9]+	{ printf("NUMBER %s\n", yytext); }
\n	{ printf("NEWLINE\n"); }
[ \t]	{ }
.	{ printf("Mystery character %s\n", yytext); }
%%
