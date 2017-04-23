#include <stdio.h>
const double PI=3.1415925358979323;
int main()
{
	int r;
	scanf("%d",&r);
	printf("%.7f\n",PI*r*r);
	return 0;
}

/* C++ fault!!
	setprecision() has some problem...
#include <iostream>
#include <iomanip>
using namespace std;
const double PI=3.14159265358979323;
int main(){
	int r;
	cin>>r;
	cout<<setprecision(9)<<PI*r*r<<endl;
	return 0;
}
*/
