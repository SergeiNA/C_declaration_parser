#ifndef COMMON
#define COMMON

#include <string.h>
#include <stdio.h>
#include <ctype.h>

#define MAXTOKEN 200
#define MAXDECLR 100

#define SIZE_OF(x) sizeof(x)/sizeof(x[0])

enum { NAME, PARENS, BRACKETS };

int getch();
void ungetch(int);
void setBuf(char data[], int size);

short isSet;

void dcl();
void dirdcl();

int gettoken();
int tokentype;

void parseDcl(char []);

char inputMsg[MAXDECLR][MAXTOKEN];
char token[MAXTOKEN];
char name[MAXTOKEN];
char datatype[MAXTOKEN];
char out[1000];

#endif // !COMMON
