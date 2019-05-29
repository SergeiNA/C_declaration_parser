/*
	The C Language.
	CH5, 5.12 
	--------------------------------------------
	29/05/19 Add setBuf, break to different files
	TODO write undecl, understand
*/
#include "common.h"

int main() {
	isSet = 0;
	char data[] = 
		"char *ptr\n\
char **ptrarr\nchar (*arr)[3]\n\
char *arr[3]\n\
void *f()\nvoid (*f)()\n\
char (*(*x())[])()\n\
char (*(*x[3])())[5]\n\
unsigned *(*(**bazz[][7])())[]\n";
	setBuf(data, SIZE_OF(data));
	parseDcl(data);
	return 0;
}