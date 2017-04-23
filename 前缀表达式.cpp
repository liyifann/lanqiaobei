#include <iostream>
using namespace std;
int main(){
	char c;
	int x,y;
	cin>>c;
	cin>>x>>y;
	if(y==0)
		return 0;
	switch(c){
		case '+':cout<<x+y;break;
		case '-':cout<<x-y;break;
		case '*':cout<<x*y;break;
		case '/':cout<<x/y;break;
	}
	return 0;
}
