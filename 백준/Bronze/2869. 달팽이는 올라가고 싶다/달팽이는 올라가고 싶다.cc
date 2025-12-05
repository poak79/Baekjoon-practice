#include <iostream>
using namespace std;

int main() {
	long long A, B, V;
	cin >> A >> B >> V;

	long long day = (V - B - 1) / (A - B) + 1;

	cout << day;
}