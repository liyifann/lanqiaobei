#include <iostream>
using namespace std;
int a[20] = { 0 };
int main() {
	int i, t, n;
	for (i = 0;; i++) {
		cin >> a[i];
		if (a[i] == 0)break;
	}
	if (i == 0)return 0;
	n = i - 1;
	for (i = 0; i <= n / 2; i++) {
		t = a[i];
		a[i] = a[n - i];
		a[n - i] = t;
	}
	for (i = 0; i<n; i++)
		cout << a[i] << " ";
	cout << a[i] << endl;
	return 0;
}
