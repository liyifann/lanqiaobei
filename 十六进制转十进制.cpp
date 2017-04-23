#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
	long long dec=0;
	string hex;
	cin>>hex;
	int len=hex.length();
	for(int i=0;i<len;i++){
		if(hex[i]>='A')
			dec+=(hex[i]-'A'+10)*pow(16,len-1-i);
		else
			dec+=(hex[i]-'0')*pow(16,len-1-i);
	}
	cout<<dec;
	return 0;
}
