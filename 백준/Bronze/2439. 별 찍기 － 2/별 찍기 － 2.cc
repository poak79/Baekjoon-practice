#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) { //현재 줄 번호
		for (int j = 1; j <= n - i; j++) {
			cout << " ";
		}
		for (int j = 1; j <= i; j++) { //한 줄에 별을 찍는 횟수
			cout << "*";
		}
		cout << endl;
	}
}