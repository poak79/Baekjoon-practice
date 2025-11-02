#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int h, m, c;
	scanf("%d %d", &h, &m);
	scanf("%d", &c);

	m += c;                

	while (m >= 60) {
		m -= 60;
		h += 1;
		if (h == 24)       
			h = 0;
	}

	printf("%d %d", h, m);
	return 0;
}