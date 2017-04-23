#include <iostream>
#include <string>
using namespace std;
int main(){
	string s1,s2;
	cin>>s1>>s2;
	int i,len1=s1.length(),len2=s2.length();
	int a[26]={0},b[26]={0};
	if(len1!=len2){
		cout<<"N"<<endl;
		return 0;
	}
	else{
		for(i=0;i<len1;i++){
			a[s1[i]>90?s1[i]-97:s1[i]-65]++;
			b[s2[i]>90?s2[i]-97:s2[i]-65]++;
		}
		for(i=0;i<26;i++){
			if(a[i]!=b[i]){
				cout<<"N"<<endl;
				return 0;
			}
		}
		cout<<"Y"<<endl;
	}
	return 0;
}
