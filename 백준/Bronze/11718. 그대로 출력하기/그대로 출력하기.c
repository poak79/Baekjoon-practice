#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[101];

	/*
	while (fgets(str, sizeof str, stdin) != NULL)
		fputs(str, stdout);
	*/

	int c;
	while ((c = getchar()) != EOF)
		putchar(c);
}