#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	int last = a * (b % 10);
	printf("%d\n", last);

	int mid = a * ((b/10) % 10);
	printf("%d\n", mid);

	int fir = a * (b/100);
	printf("%d\n", fir);

	int res = last + (mid * 10) + (fir * 100);
	printf("%d", res);
}