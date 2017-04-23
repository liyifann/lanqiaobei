#include <iostream>
using namespace std;
int a[10000];
int main(){
	int n,i;
	long max,min;
	cin>>n;
	cin>>a[0];
	max=min=a[0];
	for(i=1;i<n;i++){
		cin>>a[i];
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}
	cout<<max<<" "<<min<<endl;
	return 0;
}
