#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	double a[1000];

	double max = 0.0;
	for (int i = 0; i < n; i++) {
		scanf("%lf", &a[i]);
		if (max < a[i])
			max = a[i];
	}

	double ave = 0.0;
	for (int i = 0; i < n; i++) {
		ave += (a[i] / max) * 100.0;
	}

	printf("%lf", ave / n);	

	return 0;
}