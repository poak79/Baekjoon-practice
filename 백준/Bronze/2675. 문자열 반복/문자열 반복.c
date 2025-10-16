#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int T;
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		int R;
		char str[21];
		scanf("%d %s", &R, str);

		for (int j = 0; str[j] != '\0'; j++) {
			for (int k = 0; k < R; k++) {
				printf("%c", str[j]);
			}
		}printf("\n");
	}
}