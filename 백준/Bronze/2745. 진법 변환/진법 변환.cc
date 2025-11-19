#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char N[37];
	int B;
	cin >> N >> B;

	long long res = 0;
	int len = strlen(N);

	for (int i = 0; i < len; i++) {
		char c = N[i];
		int digit;

		if ('0' <= c && c <= '9') digit = c - '0';
		else digit = c - 'A' + 10;
		res = res * B + digit;
	}

	cout << res;
	return 0;
}