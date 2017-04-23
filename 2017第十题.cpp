#include <iostream>
using namespace std;
int main() {
	int n, k;
	int i, j, count = 0, sum;
	cin >> n >> k;
	int *a = new int[n];
	for (i = 0; i<n; i++)
		cin >> a[i];
	for (i = 0; i<n; i++) {
		sum = 0;
		for (j = i; j<n; j++) {
			sum += a[j];
			if (sum%k == 0)
				count++;
		}
	}
	cout << count;
	return 0;
}