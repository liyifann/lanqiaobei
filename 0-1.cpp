/*
#include <iostream>
using namespace std;
int main() {
	int a, b, c, d, e;
	for (a = 0; a < 2; a++)
		for (b = 0; b < 2; b++)
			for (c = 0; c < 2; c++)
				for (d = 0; d < 2; d++)
					for (e = 0; e < 2; e++)
						cout << a << b << c << d << e << endl;
	return 0;
}
*/



#include <iostream>
using namespace std;
int main()
{
	for (int i = 0; i<32; i++) {
		cout << i % 32 / 16 << i % 16 / 8 << i % 8 / 4 << i % 4 / 2 << i % 2 << endl;
	}
	return 0;
}


//http://blog.csdn.net/u012110719/article/details/41870877

/*
#include <iostream>
using namespace std;
void D_B(int num)
{
	int bin[500];
	int i = 0, j = 0;
	while (num != 0)
	{
		bin[i] = num % 2;
		num = num / 2;
		i++;
	}
	if (i == 0)cout << "00000";
	if (i == 1)cout << "0000";
	if (i == 2)cout << "000";
	if (i == 3)cout << "00";
	if (i == 4)cout << "0";
	for (j = i - 1; j >= 0; j--)
	{
		cout << bin[j];
	}
	cout << endl;
}

void main()
{
	int i;
	cout << "Output 32 row,from small to big,as this:" << endl;
	for (i = 0; i<32; i++) {
		D_B(i);
		// if((i+1)%5==0) cout<<endl; 
	}
}
*/
