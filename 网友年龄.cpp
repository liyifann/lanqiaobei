/*
某君新认识一网友。
当问及年龄时，他的网友说：
“我的年龄是个2位数，我比儿子大27岁,
如果把我的年龄的两位数字交换位置，刚好就是我儿子的年龄”
 
请你计算：网友的年龄一共有多少种可能情况？
 
提示：30岁就是其中一种可能哦.
 
请填写表示可能情况的种数。
注意：你提交的应该是一个整数，不要填写任何多余的内容或说明性文字。
*/

#include <iostream>
using namespace std;
int main(){
	int count=0;
	for(int age=10;age<100;age++){
		if(age%10*10+age/10+27==age){
			cout<<age<<endl;
			count++;
		}
	}
	cout<<endl<<count<<endl;
	return 0;
}

//7