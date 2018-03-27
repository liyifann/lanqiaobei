#include <iostream>
using namespace std;
int n=0,count=0;
bool isEqual(int *a){
    int i;
    for(i=1;i<n;i++){
        if(a[i-1]!=a[i])
            break;
    }
    if(i==n)
        return true;
    else
        return false;
}
void check(int *a){
    for(int i=0;i<n;i++){
        if(a[i]%2!=0){
            a[i]+=1;
            count++;
        }
    }
}
int main(){
    int i;
    cin>>n;
    int *a=new int [n];
    int *t=new int [n];
    for(i=0;i<n;i++)
        cin>>a[i];
    while(!isEqual(a)){
        for(i=0;i<n;i++)
            t[i]=a[i];
        for(i=0;i<n-1;i++)
            a[i]=t[i]/2+t[i+1]/2;
        a[n-1]=t[n-1]/2+t[0]/2;
        check(a);
    }
    cout<<count<<endl;
    return 0;
}