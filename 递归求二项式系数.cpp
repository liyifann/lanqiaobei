#include<iostream>
using namespace std;
int C(int n,int m)
{
    if(m==0 || m==n) return 1;
    else return C(n-1,m-1)+C(n-1,m);//�������
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<C(n,m)<<endl;
    return 0;
}
//ʱ�临�Ӷ�O(C(n,m)),�ռ临�Ӷ�O(n);
