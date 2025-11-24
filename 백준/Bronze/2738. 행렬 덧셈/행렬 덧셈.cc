#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	
	vector<vector<int>> a(n, vector<int>(m));
	vector<vector<int>> b(n, vector<int>(m));
	vector<vector<int>> res(n, vector<int>(m));

	/*int* a = new int[n * m];
	int* b = new int[n * m];
	int* res = new int[n * m];*/

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> b[i][j];
		}
	}

	for(int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			res[i][j] = a[i][j] + b[i][j];
			cout << res[i][j] << " ";
		}
		cout << endl;
	}

}