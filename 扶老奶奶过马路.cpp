#include<cstdio>  
#include<cstring>  
using namespace std;  
int main()  
{  
    int a[5],sum;  
    for(int i=0; i<5; i++)  
    {  
        sum=0;//��¼˵�滰�ĸ���  
        memset(a,0,sizeof(a));  
        a[i]=1;  
        if(!a[0]&&!a[4])//A˵�Ļ�  
            sum++;  
        if(a[2]||a[4])//B˵�Ļ�  
            sum++;  
        if(a[2]||a[3])//C  
            sum++;  
        if(!a[1]&&!a[2])//D  
            sum++;  
        if(!a[4])//E  
            sum++;  
        if(sum==2)//����������˵���滰  
            printf("%c ",'A'+i);  
    }  
    printf("\n");  
    return 0;  
} 
