#include <iostream>
using namespace std;
int main(){
	int n,i,j,max,x;
	cin>>n;
	if(n>20||n<=0) //������������С�ڵ���0�ģ�ע��nȡֵ��Χ�� 
		return 0;
	int *a=new int[n];
	int *b=new int[n];
	for(i=0;i<n;i++){
		cin>>a[i];
		b[i]=0;
	}
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(a[i]==a[j])
				b[i]++;
	max=b[0];
	x=a[0];
	for(i=1;i<n;i++)
		if(b[i]>max){
			max=b[i];
			x=a[i];
		}
	cout<<x<<endl;
	return 0;
}
				

//һ��������뷨�� 
//#include<iostream>
//using namespace std;
//const int N = 100000;
//int a[N];
//int main()
//{
//	int n;
//	cin >> n;
//	if (n>0 && n <= 20)
//	{
//		for (int i = 1; i <= n; ++i)
//		{
//			int num;
//			cin >> num;
//			a[num]++;
//		}
//
//		int max = -1, pos = -1, i;
//		for (i = 0; i<N; ++i)
//		{
//			if (a[i]>max)
//			{
//				max = a[i];
//				pos = i;
//			}
//		}
//		cout << pos << endl;
//	}
//	return 0;
//}


//�����뷨 
//#include <iostream>
//using namespace std;
//int main(){
//	int i,n,now,save,t=0,tmax=0;
//	cin>>n;
//	int *a=new int[n];
//	for(i=0;i<n;i++)
//		cin>>a[i];
//	now=save=a[0];
//	for(i=0;i<n;i++){
//		if(now==a[i]){
//			if(save==a[i]){
//				t++;
//				tmax++;
//			}
//			else{
//				
//				
//	return 0;
//}
