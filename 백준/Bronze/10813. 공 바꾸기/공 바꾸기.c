#include <stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	int num[n];

	for (int i = 0; i < n; i++) {
		num[i] = i + 1;
	}

	int a, b;
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);
		int tmp = num[a - 1];
		num[a - 1] = num[b - 1];
		num[b - 1] = tmp;
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", num[i]);
	}

}
