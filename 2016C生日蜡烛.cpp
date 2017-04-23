#include <iostream>
using namespace std;
int main(){
	int i,j,sum=0;
	for(i=1;i<100;i++){
		sum+=i;
		for(j=i+1;j<100;j++){
			sum+=j;
			if(sum==236){
				cout<<i<<endl;
				break;
			}
		}
		sum=0;
	}
	return 0;
}
