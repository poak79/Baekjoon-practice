#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int n;
	cin >> n;
	int cnt = 0;

	while (n--) {
		string str;
		cin >> str;

		bool visit[26] = { false };
		bool gr = true;

		for (int i = 0; i < str.length(); i++) {
			char c = str[i];

			if (i > 0 && str[i] != str[i - 1]) {
				if (visit[c - 'a']) {
					gr = false;
					break;
				}
			}
			
			visit[c - 'a'] = true;
		}
		if (gr) cnt++;
	}

	cout << cnt;
	return 0;
}