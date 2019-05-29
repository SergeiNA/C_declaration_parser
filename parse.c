#include "common.h"




void parseDcl(char str[]) {
	printf("%s:\t\t%s:\n","DECLARARTION", "DEFINITION");
	int i = 0;
	while (gettoken() != EOF) {
		strcpy(datatype, token);
		out[0] = '\0';
		dcl();
		if(isSet)
			printf("%s", inputMsg[i++]);
		if (tokentype != '\n')
			printf("syntax error\n");
		printf("%8s:%s %s\n", name, out, datatype);
	}
}