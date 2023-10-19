#include <stdio.h>
#include <math.h>
int main(){
    long i,j=1,s=1;
    int flag=0,f=10;    
    long long cnt=0;
    double pi=4,t=4,api=3.14159265358979323;

    for(i=1;fabs(t)>1e-6;i++){
        s=-s;
        t=s*4.0/(j+=2);
        pi+=t;
        cnt++;

        if((int)(pi*f-(int)(api*f))==0 && (pi*f-(int)(api*f))>=0 && fabs(pi*f-(int)(api*f))<0.5){

            f*=10;
            flag+=1;
            printf("历时计算%10d项，得到精度位小数点后%d位的逼进值%f\n",cnt,flag,pi);
            }
    }
}