#include<iostream>
using namespace std;
int C(int n,int m)
{
    if(m==0 || m==n) return 1;
    else return C(n-1,m-1)+C(n-1,m);//杨辉三角
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<C(n,m)<<endl;
    return 0;
}
//时间复杂度O(C(n,m)),空间复杂度O(n);
