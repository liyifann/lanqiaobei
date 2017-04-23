#include <stdio.h>
float a[30][30];
int main()
{
	int i,j;
	for(i=0;i<30-1;i++)
		for(j=0;j<=i;j++)
			scanf("%f",&a[i][j]);
	for(i=0;i<30-1;i++)
		for(j=0;j<=i;j++)
		{
			a[i+1][j]+=a[i][j]/2;
			a[i+1][j+1]+=a[i][j]/2;
		}
	for(i=0;i<30-1;i++)
		for(j=i+1;j<30;j++)
			if(a[29][i]>a[29][j])
			{
				int t=a[29][i];
				a[29][i]=a[29][j];
				a[29][j]=t;
			}
	printf("%f %f",a[29][0],a[29][29]);
	return 0;
}
