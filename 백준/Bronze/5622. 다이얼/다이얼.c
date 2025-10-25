#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[16];
	int cnt = 0;
	scanf("%s", str);

	for (int i = 0; i < strlen(str); i++) {
		if ('A' <= str[i] && str[i] <= 'C') cnt += 3;
		else if ('D' <= str[i] && str[i] <= 'F') cnt += 4;
		else if ('G' <= str[i] && str[i] <= 'I') cnt += 5;
		else if ('J' <= str[i] && str[i] <= 'L') cnt += 6;
		else if ('M' <= str[i] && str[i] <= 'O') cnt += 7;
		else if ('P' <= str[i] && str[i] <= 'S') cnt += 8;
		else if ('T' <= str[i] && str[i] <= 'V') cnt += 9;
		else if ('W' <= str[i] && str[i] <= 'Z') cnt += 10;
	}

	printf("%d", cnt);
}