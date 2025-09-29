#include <stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	int num[n];
	for (int i = 0; i < n; i++)
		num[i] = 0;
	

	for (int i = 0; i < m; i++) {
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		for (int j = a - 1; j <= b - 1; j++) {
			num[j] = c;
		}	
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", num[i]);
	}
	return 0;
}