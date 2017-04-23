#include <iostream>
using namespace std;
int main(){
	int age;
	for(age=10;age<100;age++){
		if(age-(age/10+age%10*10)==27)
			cout<<age<<" ";
	}
	cout<<endl;
	return 0;
}
