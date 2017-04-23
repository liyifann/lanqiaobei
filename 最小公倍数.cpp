#include <iostream>
using namespace std;
int main(){
	int i,a,b;
	cin>>a>>b;
	for(i=a<b?a:b;i>=1;i--)
		if (a%i == 0 && b%i == 0)
			break;
	cout << (a*b)/i << endl;
	return 0;
}
