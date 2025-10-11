#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char str[1000];
	scanf("%s", &str);

	int n;
	scanf("%d", &n);

	printf("%c", str[n-1]);
}