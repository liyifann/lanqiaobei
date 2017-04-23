#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int w,m,n;
    cin>>w>>m>>n;
    m--;
    n--;
    int m1=m/w, m2=m%w;
    if(m1&1)
    {
        m2=w-1-m2;
    }
    int n1=n/w, n2=n%w;
    if(n1&1)
    {
        n2=w-1-n2;
    }       
    cout<<abs(m1-n1)+abs(m2-n2)<<endl;
    return 0;
}


/* Error!
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int w,m,n,a=0,b=0,j=1,k=1,step;
	cin>>w>>m>>n; 
	if(m%w==0)
		a=m/w-1;
	else
		a=m/w;
	
	if(n%w==0)
		b=n/w-1;
	else
		b=n/w; 
	if(a%2==0)
		j=0;
	if(b%2==0)
		k=0;
		
		
	if(abs(a-b)%2==0)
		step=abs(a-b)+(n-n/6*6)-%w
	else{
		if(j)
			step=abs(a-b)+abs(((w+1)-m%w+(m/w*w))-n)%w;
		else
			step=abs(a-b)+abs(((w+1)-n%w+(n/w*w))-m)%w;
	}
	cout<<abs(a-b)<<endl;
	cout<<step<<endl;
	return 0;
}
	*/
