#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char str[1000001];
	int a[26] = { 0 };
	int max = 0;
	char res = '?';

	cin >> str;
	int size = strlen(str);
	
	for (int i = 0; i < size; i++) {
		if (str[i] >= 'a') a[str[i] - 'a']++;
		else a[str[i] - 'A']++;
	}

	for (int i = 0; i < 26; i++) {
		if (a[i] == max && max != 0) res = '?';
		else if (a[i] > max) {
			max = a[i];
			res = 'A' + i;
		}
	}

	cout << res;
	return 0;
}