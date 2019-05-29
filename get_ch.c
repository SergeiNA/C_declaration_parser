#include <stdio.h>
#include <string.h>
#include "common.h"

#define BUFSIZE 1000

static char		buf[BUFSIZE];
static int		bufp = 0;

void splitByEnd(const char str[], char strarr[][MAXTOKEN]) {
	int i, j;
	i = 0;
	j = 0;
	while (*str != EOF)
	{
		if (*str == '\n') {
			str++;
			strarr[j][i] = '\0';
			if (*str == EOF) return;
			j++;
			i = 0;
		}
		strarr[j][i++] = *str++;
	}
}

void setBuf(char data[], int size) {
	splitByEnd(data, inputMsg);
	_strrev(data);
	strcpy(buf, data);
	bufp = size - 1;
	isSet = 1;
}

int getch() {
	return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c) {
	if (bufp >= BUFSIZE)
		printf("ungetch: too many arg\n");
	else
		buf[bufp++] = c;
}

