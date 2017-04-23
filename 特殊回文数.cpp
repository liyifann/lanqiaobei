#include <iostream>
using namespace std;
int main(){
	int n,i,flag=1;
	cin>>n;
	for(i=10000;i<1000000;i++){
		int x=i,y=0,sum=0;
		while(x){
			sum=sum+(x%10);
			y=(y*10)+(x%10);
			x=x/10;
		}
		if(y!=i)
			continue;
		if(sum==n){
			flag=0;
			cout<<i<<endl; 
		}
	}
	if(flag)
		cout<<"-1"<<endl;
	return 0;
}
