#include <iostream>
#include <string>
using namespace std;
int main() {
	unsigned int a;
	char x = 'A', y = '0';
	cin >> a;
	string s[10];  //string一定要初始化!!!!!!! 
	int i = 0;
	if (!a) {
		cout << "0";
		return 0;
	}
	while (a) {
		x = 'A';
		y = '0';
		if (a % 16 >= 10) {
			x += a % 16 - 10;
			s[i] = x;
		}	
		else {
			y += a % 16;
			s[i] = y;
		}
		a = a / 16;
		i++;
	}
	for (i--; i >= 0; i--)
		cout << s[i];
	return 0;
}
