#include <iostream>
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;

	int cnt = 0;
	int ans = 0;

	for (int i = 1; i <= N; i++) {
		if (N % i == 0) {
			cnt++;
			if (cnt == K) {
				ans = i;
				break;
			}
			else ans = 0;
		}
	}

	cout << ans;
}