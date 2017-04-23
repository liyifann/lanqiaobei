#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int K,L,i,j,sum=0;
	cin>>K>>L;
	for(i=0;i<K;i++)
		for(j=0;j<K;j++)
			if(i!=0&&abs(i-j)!=1){
				sum++;
				sum%=1000000007;
			}
	cout<<sum<<endl;
	return 0;
}
