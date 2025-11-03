#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if (a == b && b == c) printf("%d", 10000 + a * 1000);
	else if (a == b || a == c || b == c) {
		int same = (a == b || a == c) ? a : b;
		printf("%d", 1000 + same * 100);
	}
	else {
		int max = a;
		if (b > max) max = b;
		if (c > max) max = c;

		printf("%d", max * 100);
	}
}