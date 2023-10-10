#include<stdio.h>
int main(){
    int cnt=1;
    double s=0,x,a=1;
    
    scanf("%lf",&x);
    while(a>1e-6){
        s+=a;
        a*=(float)x/(float)cnt;
        cnt++;
    }
    printf("%f",s);
}