#include <stdio.h>
#include <string.h>
int main()
{
	char a[9], b[9], a1[9], b1[9], s[100] = { 0 };
	int i, j, alen, blen;
	scanf("%s %s", a1, b1);
	alen = strlen(a1);
	blen = strlen(b1);
	for (i = 0; i < alen; i++)
		a[i] = a1[alen - i - 1] - '0';//倒置，个十百千万等位，对应数组1,2,3。。。。 
	for (i = 0; i < blen; i++)
		b[i] = b1[blen - i - 1] - '0';
	for(i=0;i<alen;i++)
		for (j = 0; j < blen; j++)
		{
			s[i + j] += a[i] * b[j];
			if (s[i + j] >= 10)//大于等于10，进一位 
			{
				s[i + j + 1] += s[i + j] / 10;
				s[i + j] %= 10;
			}
		}
	for (i = 99; i > 0; i--)
		if (s[i] != 0)
			break;
	for (; i >= 0; i--)
		printf("%d", s[i]);
	printf("\n");
	return 0;
}
