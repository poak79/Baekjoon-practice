#include <iostream>
using namespace std;

int main() {
	int a[9][9];
	int n, m = 1;
	int res = -1;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> a[i][j];

			if (a[i][j] > res) {
				res = a[i][j];
				n = i+1;
				m = j+1;
			}
		}
	} 

	cout << res << endl;
	cout << n << " " << m;

}