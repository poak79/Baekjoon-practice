#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[101];

	scanf("%s", str);

	for (char ch = 'a'; ch <= 'z'; ch++) {
		int res = -1;
		for (int i = 0; i < strlen(str); i++) {
			if (str[i] == ch) {
				res = i;
				break;
			}
		}
		printf("%d ", res);
	}
}