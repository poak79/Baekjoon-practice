#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string str;
	cin >> str;

	int cnt = 0;
	int i = 0;
	int len = str.length();

	while (i < len) {
		if (i + 2 < len && str[i] == 'd' && str[i + 1] == 'z' && str[i + 2] == '=') {
			cnt++;
			i += 3;
		}

		else if (i + 1 < len) {
			string two = str.substr(i, 2);
			if (two == "c=" || two == "c-" || two == "d-" || two == "lj"
				|| two == "nj" || two == "s=" || two == "z=") {
				cnt++;
				i += 2;
			}
			else {
				cnt++;
				i++;
			}
		}

		else {
			cnt++;
			i++;
		}
		
	}

	cout << cnt;
	return 0;
}