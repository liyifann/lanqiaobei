#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int i,x;
	for(i=1800;i<1900;i++){
		x=(int)sqrt(i);
		if(x*x==i)
			cout<<i-x;
	}
	return 0;
}

