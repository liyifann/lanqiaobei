#include <iostream>
using namespace std;
int main(){
	int n,m,l,r,K,i,j,t;
	cin>>n;
	int *a=new int[n+1];
	int *b=new int[n+1];
	for(i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	cin>>m;
	while(m){
		cin>>l>>r>>K;
		for(i=l;i<=r;i++)
			for(j=i+1;j<=r;j++)
				if(a[i]<a[j]){
					t=a[i];
					a[i]=a[j];
					a[j]=t;
				}
		cout<<a[l+K-1]<<endl;
		for(i=1;i<=n;i++)
			a[i]=b[i];
		m--;
	}
	return 0;
}
