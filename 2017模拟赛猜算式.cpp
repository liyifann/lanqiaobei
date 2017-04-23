#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int check(int i,int * f){
    while(i>0){
        if(f[i%10]==2){
            return 0;
        }
        f[i%10]++;
        i/=10;
    }
    return 1;
}
int main(){
    for(int i = 100;i<=999;i++){
        for(int j = 100;j<=999;j++){
            int f[10] = {0};
            int a = i*(j%10);
            int b = i*(j/10%10);
            int c = i*(j/100);
            if(a>=1000||b>=1000||c>=1000||i*j>=100000||a<100||b<100||c<100)continue;
            //i,j,a,b,c,i*j
            if(check(i,f)&&check(j,f)&&check(a,f)&&check(b,f)&&check(c,f)&&check(i*j,f)){
                printf("%d %d %d %d %d %d",i,j,a,b,c,i*j);
            }
        }
    }
    return 0;
}
