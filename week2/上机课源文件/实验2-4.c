#include<stdio.h>
void main(){
    int m,n,p,x=8,y=18;
    printf("x=%d\ty=%d\t\n",x,y);
    m=(x++)+(++y);
    printf("x=%d\ty=%d\tn=%d\n",x,y,m);
    n=(x--)+(--y);
    printf("x=%d\ty=%d\tn=%d\n",x,y,n);
    p=y%x;
    printf("x=%d\ty=%d\tP=%d\n",x,y,p);
    x=3;
    x+=x/=x-=x*x;
    printf("x=%d\n",x);
    
}