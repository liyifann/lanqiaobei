#include <iostream>
using namespace std;
int main(){
	int i,j,a[3],t;
	for(i=0;i<3;i++)
		cin>>a[i];
	for(i=0;i<3;i++)
		for(j=i+1;j<3;j++)
			if(a[i]<a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
	for(i=0;i<3;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
