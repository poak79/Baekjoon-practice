#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	long long int N;
	int B;
	cin >> N >> B;

	string res = "";

	while (N > 0) {
		int digit = N % B;
		char ch;

		if (digit < 10) ch = '0' + digit;
		else ch = 'A' + (digit - 10);

		res += ch;
		N /= B;
	}

	reverse(res.begin(), res.end());
	cout << res;

	return 0;
}