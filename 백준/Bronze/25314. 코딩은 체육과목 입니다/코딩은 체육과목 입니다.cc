#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int res = n /= 4;
	for (int i = 0; i < res; i++) {
		cout << "long ";
	}
	cout << "int";

}