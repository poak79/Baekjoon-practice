#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int x, y;
	int minx, maxX, miny, maxY;

	scanf("%d %d", &x, &y);
	minx = maxX = x;
	miny = maxY = y;

	for (int i = 1; i < n; i++) {
		scanf("%d %d", &x, &y);

		if (x < minx) minx = x;
		if (x > maxX) maxX = x;
		if (y < miny) miny = y;
		if (y > maxY) maxY = y;
	}

	printf("%d", (maxX - minx) * (maxY - miny));
}