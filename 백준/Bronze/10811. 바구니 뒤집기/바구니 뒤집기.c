#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);

	int nums[101];
	for (int i = 1; i <= n; i++)
		nums[i] = i;

	for (int k = 0; k < m; k++) {
		int i, j;
		scanf("%d %d", &i, &j);

		while (i < j) {
			int tmp = nums[i];
			nums[i] = nums[j];
			nums[j] = tmp;
			i++;
			j--;
		}
	}

	for (int i = 1; i <= n; i++) {
		printf("%d ", nums[i]);
	}
	return 0;
}