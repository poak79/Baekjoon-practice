#include <stdio.h>

int main() {
	int num;
	int check[31] = {0};

	for (int i = 0; i < 28; i++) {
		scanf("%d", &num);
		check[num] = 1;
	}

	for (int i = 1; i <= 30; i++) {
		if (check[i] == 0) {
			printf("%d\n", i);
		}
	}

	return 0;
}