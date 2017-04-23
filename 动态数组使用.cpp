#include <iostream>
using namespace std;
int main(){
	int n,i,sum=0,aver;
	cin>>n;
	int *s=new int[n];
	for(i=0;i<n;i++){
		cin>>s[i];
		sum+=s[i];
	}
	aver=sum/n;
	cout<<sum<<" "<<aver<<endl;
	return 0;
}
