#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int h, m;
	scanf("%d %d", &h, &m);

	if (m < 45) {
		if (h == 0) {
			h = 24;
			printf("%d %d", h - 1, (m + 60) - 45);
		}
		else {
			printf("%d %d", h - 1, (m + 60) - 45);
		}
	}
	else {
		printf("%d %d", h, m - 45);
	}

}