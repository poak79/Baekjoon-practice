#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	bool triangle = false;

	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;

	if (max == a) {
		if (b + c > a) triangle = true;
	}
	else if (max == b) {
		if (a + c > b) triangle = true;
	}
	else if (max == c) {
		if (a + b > c) triangle = true;
	}

	if (triangle) {
		printf("%d", a + b + c);
	}
	else {
		if (max == a) printf("%d", b + c + (b + c - 1));
		else if (max == b) printf("%d", a + c + (a + c - 1));
		else if (max == c) printf("%d", a + b + (a + b - 1));
	}
}