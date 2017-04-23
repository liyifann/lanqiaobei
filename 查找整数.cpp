#include <iostream>
using namespace std;
int a[1000];
int main(){
	int n,i,x,f=1;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	cin>>x;
	for(i=0;i<n;i++)
		if(a[i]==x){
			cout<<i+1<<endl;
			f=0;
			break;
		}
	if(f)
		cout<<"-1"<<endl;
	return 0;
}
