#include <iostream>
using namespace std;
int CompactIntegers(int *a,int n){
	int i,j;
	for(i=0;i<n;i++){
		if(a[i]==0){
			for(j=i;j<n;j++)
				a[j]=a[j+1];
			n--;
			i--;
		}
	}
	return n;
}
int main(){
	int n,i,m;
	cin>>n;
	int *a=new int[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	m=CompactIntegers(a,n);
	cout<<m<<endl;
	for(i=0;i<m;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
