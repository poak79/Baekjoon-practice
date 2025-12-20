#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, y, x1, y1, x2, y2, x3, y3;
	scanf("%d %d %d %d %d %d", &x, &y, &x1, &y1, &x2, &y2);

	x3 = x ^ x1 ^ x2;
	y3 = y ^ y1 ^ y2;

	printf("%d %d", x3, y3);
}