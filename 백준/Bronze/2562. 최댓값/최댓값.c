#include <stdio.h>

int main() {
	int num[9];
	for (int i = 0; i < 9; i++) {
		scanf("%d", &num[i]);
	}
	
	int index = 1;
	int max = num[0];
	for (int i = 1; i < 9; i++) {
		if (max < num[i]) {
			max = num[i];
			index = i+1;
		}
	}
	printf("%d\n", max);
	printf("%d", index);

	return 0;
}