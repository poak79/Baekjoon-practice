#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str1[4];
	char str2[4];
	int tmp = 0;

	scanf("%s %s", str1, str2);

	tmp = str1[2];
	str1[2] = str1[0];
	str1[0] = tmp;

	tmp = 0;
	tmp = str2[2];
	str2[2] = str2[0];
	str2[0] = tmp;

	int num1 = atoi(str1);
	int num2 = atoi(str2);

	int max = num1 > num2 ? num1 : num2;
	printf("%d", max);

	return 0;
}