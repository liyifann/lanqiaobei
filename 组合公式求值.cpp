#include <iostream>
using namespace std;
unsigned long long jc(unsigned long long z){
	unsigned long long i;
	if(z==1||z==0)
		return 1;
	else
		return (z*jc(z-1));
}
int main(){
	unsigned long long i,m,n,s=0;
	cin>>n>>m;
	for(i=0;i<=n;i++){
		s=(((jc(n)/(jc(m)*jc(n-m))) * (jc(n)/(jc(i)*jc(n-i))) * i*i*i)+s)%987654321;
	}
	cout<<s<<endl;
	return 0;
}

