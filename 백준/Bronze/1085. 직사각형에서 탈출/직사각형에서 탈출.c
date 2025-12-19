#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);

	int min = x;
	if (w - x < min) min = w - x;
	if (y < min) min = y;
	if (h - y < min) min = h - y;

	printf("%d", min);
}