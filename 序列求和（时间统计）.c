#include <stdio.h>
#include <time.h>
long long n,sum=0;
int main()
{
	scanf("%I64d",&n);
	sum=(n+1)*n/2;
	printf("%I64d\n",sum);
	printf("Time used=%lf\n",(double)clock()/CLOCKS_PER_SEC);
	return 0;
}
