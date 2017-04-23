#include <iostream>
using namespace std;
int main(){
	int a,b,c,d;
	for(a=20;a>0;a--)
		for(b=a-1;b>0;b--)
			for(c=b-1;c>0;c--)
				for(d=c-1;d>0;d--)
					if(b*c*d+a*c*d+a*b*d+a*b*c==a*b*c*d)
						cout<<a<<","<<b<<","<<c<<","<<d<<endl;
	return 0;
}
