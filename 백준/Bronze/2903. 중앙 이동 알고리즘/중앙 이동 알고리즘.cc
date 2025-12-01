#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int N;
	cin >> N;

	int cnt = pow(2, N) + 1;
	cout << cnt * cnt;
}