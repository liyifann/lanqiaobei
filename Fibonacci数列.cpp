#include <iostream>
using namespace std;
int main(){
	int a=1,b=1,c,n,i;
	cin>>n;
	if(n==1||n==2)
		cout<<"1"<<endl;
	else{
		for(i=3;i<=n;i++){
			c=(a+b)%10007;
			a=b;
			b=c;
		}
		cout<<c<<endl;
	}
	return 0;
}
		

/*
#include <iostream>
using namespace std;
int f[1000000];
int main(){
	int n,i;
	cin>>n;
	f[0]=f[1]=1;
	for(i=2;i<n;i++)
		f[i]=(f[i-2]+f[i-1])%10007;
	cout<<f[n-1]<<endl;
	return 0;
}
*/
	
