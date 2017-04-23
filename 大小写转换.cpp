#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char s[21];
	int i;
	cin>>s;
	for(i=0;i<strlen(s);i++){
		if(s[i]>='a')
			s[i]-=32;
		else
			s[i]+=32;
	}
	cout<<s<<endl;
	return 0;
}
