#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int layer = 1;
	int max = 1;

	while (max < N) {
		max += 6 * layer;
		layer++;
	}

	cout << layer;
}