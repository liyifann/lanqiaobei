#include <iostream>
using namespace std;
int a[10001];
int main() {
	int l, i, j, m, n, N = 0;
	cin >> l;
	while (cin >> a[N++]) {}  //∞¥Ctrl+ZΩ· ¯ ‰»Î 
	for (i = 0; i<N - 1; i++)
		for (j = i + 1; j < N; j++)
			if (a[i] > a[j]) {
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
	for (i = 0; i < N - 1; i++) {
		if (a[i] == a[i + 1])
			n = a[i + 1];
		if (a[i + 1] - a[i] > 1)
			m = a[i] + 1;
	}
	cout << m << " " << n << endl;
	return 0;
}
