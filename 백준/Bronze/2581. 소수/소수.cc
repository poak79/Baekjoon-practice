#include <iostream>
using namespace std;

bool isPrime(int n) {
	if (n < 2) return false;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int main() {
	int m, n;
	cin >> m >> n;

	int sum = 0;
	int min = 0;

	for (int i = m; i <= n; i++) {
		if (isPrime(i)) {
			sum += i;
			if (min == 0) min = i;
		}
	}
	if (sum == 0) cout << "-1";
	else cout << sum << endl << min;
}