#include <iostream>
using namespace std;

int main() {
	int num[6] = { 0 };
	int res = 0;

	for (int i = 0; i < 5; i++) {
		cin >> num[i];
		res += num[i] * num[i];
	}

	cout << res % 10;
}