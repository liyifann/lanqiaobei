#include <iostream>
using namespace std;
int main(){
	int n,i,j,s=1,f=1,k=0;
	cin>>n;
	for(i=2;k<n;i++){
		for(j=2;j<i;j++){
			if(i%j==0){
				f=0;
				break;
			}
		}
		if(f){
			s*=i;
			s%=50000;
			k++;
		}
		f=1;
	}
	cout<<s<<endl;
	return 0;
}
