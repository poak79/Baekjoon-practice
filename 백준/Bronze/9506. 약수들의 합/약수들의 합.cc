#include <iostream>
using namespace std;

int main() {
	int n;
	

	while (true) {
		int res = 0;
		cin >> n;
		if (n == -1) break;

		for (int i = 1; i < n; i++) {
			if (n % i == 0) res += i;
		}

		if (res == n) {
			cout << n << " = ";
			bool first = true;
			for (int i = 1; i < n; i++) {
				if (n % i == 0) {
					if (!first) cout << " + ";
					cout << i;
					first = false;
				}
			} cout << endl;
		}

		else {
			cout << n << " is NOT perfect.\n";
		}
	}
}