#include <stdio.h>

int main() {
	int n, a;
	scanf("%d", &n);
	int num[n];

	for (int i = 0; i < n; i++) {
		scanf("%d ", &num[i]);
	}

	int result = 0;
	scanf("%d", &a);
	for (int i = 0; i < n; i++) {
		if (num[i] == a)
			result++;
	}

	printf("%d", result);

	return 0;

}