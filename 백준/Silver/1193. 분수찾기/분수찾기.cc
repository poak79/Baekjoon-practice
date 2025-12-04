#include <iostream>
using namespace std;

int main() {
	int X;
	cin >> X;

	int d = 1;
	while (d * (d + 1) / 2 < X) {
		d++;
	}

	int pre = d * (d - 1) / 2;
	int index = X - pre;

	int num, den;

	if (d % 2 == 0) {
		num = index;
		den = d - index + 1;
	}
	else {
		num = d - index + 1;
		den = index;
	}

	cout << num << '/' << den;
}