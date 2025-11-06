#include <iostream>
using namespace std;

int main() {
	int x, n, a, b, c;
	int res = 0;
	cin >> x;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		res += a * b;
		a = b = 0;
	}

	if (res == x) cout << "Yes";
	else cout << "No";
}