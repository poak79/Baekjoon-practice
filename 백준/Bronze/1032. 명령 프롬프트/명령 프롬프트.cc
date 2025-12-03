#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;

	vector<string> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}

	string res = v[0];

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < res.size(); j++) {
			if (res[j] != v[i][j]) {
				res[j] = '?';
			}
		}
	}
	cout << res;
}