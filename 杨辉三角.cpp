#include <iostream>
using namespace std;
int main(){
	int i,j,a[34][34],n;
	cin>>n;
	for(i=0;i<n;i++)
		a[i][0]=a[i][i]=1;
	for(i=2;i<n;i++)
		for(j=1;j<i;j++)
			a[i][j]=a[i-1][j]+a[i-1][j-1];
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
