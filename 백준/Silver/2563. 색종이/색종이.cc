#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	bool white[100][100] = { false };

	for (int a = 0; a < n; a++) {
		int x, y;
		cin >> x >> y;

		for (int i = x; i < x + 10; i++) {
			for (int j = y; j < y + 10; j++) {
				white[i][j] = true;
			}
		}
	}

	int area = 0;

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (white[i][j]) area++;
		}
	}

	cout << area;
}