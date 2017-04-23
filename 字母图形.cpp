#include <iostream>
using namespace std;
int main() {
	int n, m, i, j;
	char s;
	cin >> n >> m;
	for (i = 0; i < n; i++) {
		j = 0;
		for (s = 'A' + i; s > 'A'&&j < m; s--) {
			cout << s;
			j++;
		}
		for (s = 'A'; s <= 'Z'&&j < m; s++) {
			cout << s;
			j++;
		}
		cout << endl;
	}
	return 0;
}
