#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[1000001];

	fgets(str, sizeof(str), stdin);

	int len = strlen(str);
	if (len > 0 && str[len - 1] == '\n') str[len - 1] = '\0';
	
	int start = 0, end = strlen(str) - 1;

	while (str[start] == ' ' && start <= end) start++;
	while (str[end] == ' ' && end >= start) end--;

	if (start>end) {
		printf("0");
		return 0;
	}

	int cnt = 1;
	for (int i = start; i <= end; i++) {
		if (str[i] == ' ')
			cnt++;
	}
	printf("%d", cnt);
	return 0;
	
}