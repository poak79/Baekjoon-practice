#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char str[101];
	cin >> str;

	int len = strlen(str);
	int l = 0;
	int r = len - 1;

	int ispal = 1;
	while (l < r) {
		if (str[l] != str[r]) {
			ispal = 0;
			break;
		}
		l++;
		r--;
	}

	cout << ispal;
	return 0;

 }