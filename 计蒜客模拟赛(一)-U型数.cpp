/*
最近蒜头君喜欢上了U型数字，所谓U型数字，
就是这个数字的每一位先严格单调递减，后严格单调递增。
比如 212212 就是一个U型数字，
但是 333333, 9898, 567567, 3131331313，就是不是U型数字。

现在蒜头君问你，[1,100000][1,100000] 有多少U型数字？

提示：请不要输出多余的符号。
*/

#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int count=0;
	bool f1,f2;
	int x,t,l;
	for(x=101;x<100000;x++){
		f1=false,f2=false;
		t=x;
		//从末尾开始判断
		while(t){
			l=t%10;
			t/=10;
			if(l>t%10)
				f1=true;
			else
				break;
		}
		while(t){
			if(l<t%10){
				if(t/10==0){
					f2=true;
					break;
				}
				l=t%10;
				t/=10;
			}
			else
				break;
		}
		if(f1&&f2)
			count++;
	}
	cout<<count<<endl;
	return 0;
}

//8193