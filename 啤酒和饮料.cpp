#include <iostream>
using namespace std;
int main(){
	double b,d;
	for(d=0;d<=50;d++)
		for(b=0;b<d;b++)
			if(b*2.3+d*1.9==82.3)
				cout<<b;
	return 0;
}
