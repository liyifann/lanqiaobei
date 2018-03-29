/*
观察下面的加法算式：

      祥 瑞 生 辉
  +   三 羊 献 瑞
-------------------
   三 羊 生 瑞 气

其中，相同的汉字代表相同的数字，不同的汉字代表不同的数字。

请你填写“三羊献瑞”所代表的4位数字（答案唯一），不要填写任何多余内容。
*/

#include <iostream>
using namespace std;
int main(){
	int a,b,c,d,e,f,g,h;
	for(a=1;a<10;a++){
		for(b=0;b<10;b++){
			if(b==a)
				continue;
			for(c=0;c<10;c++){
				if(c==a||c==b)
					continue;
				for(d=0;d<10;d++){
					if(d==a||d==b||d==c)
						continue;
					for(e=1;e<10;e++){
						if(e==a||e==b||e==c||e==d)
							continue;
						for(f=0;f<10;f++){
							if(f==a||f==b||f==c||f==d||f==e)
								continue;
							for(g=0;g<10;g++){
								if(g==a||g==b||g==c||g==d||g==e||g==e||g==f)
									continue;
								for(h=0;h<10;h++){
									if(h==a||h==b||h==c||h==d||h==e||h==f||h==g)
										continue;
									if((a*1000+b*100+c*10+d)+(e*1000+f*100+g*10+b)==(e*10000+f*1000+c*100+b*10+h))
										cout<<a<<b<<c<<d<<"+"<<e<<f<<g<<b<<"="<<e<<f<<c<<b<<h<<endl;
								}
							}
						}
					}
				}				
			}
		}
	}
	return 0;
}

/*
  9567
+ 1085
-------
 10652
*/