#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int n;
	scanf("%d", &n);

	char str[101];
	int res = 0;
	scanf("%s", str);
	for (int i = 0; i < n; i++) {
		res += str[i] - '0';
	}

	printf("%d", res);
}