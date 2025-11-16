#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= 2 * n - 1; i++) {
		int cnt = 0;

		if (i <= n) {
			cnt = 2 * i - 1;
		}
		else {
			cnt = 2 * (2 * n - i) - 1;
		}

		int sp = ((2 * n - 1 - cnt) / 2);
		for (int j = 0; j < sp; j++) cout << " ";
		for (int j = 0; j < cnt; j++) cout << "*";
		cout << endl;
	}
}