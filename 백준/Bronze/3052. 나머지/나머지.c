#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int nums[42] = { 0 };
	int num;
	int cnt = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &num);
		nums[num % 42] = 1;
	}

	for (int i = 0; i < 42; i++) {
		if (nums[i] == 1)
			cnt++;
	}
	printf("%d", cnt);
}