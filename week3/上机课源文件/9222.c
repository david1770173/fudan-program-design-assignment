#include<stdio.h>
void main(){
    int a=168;
    float b=123.456;
    float x=35.567,y;
    printf(" a = %5d\n",a);
    printf(" a = %-5d\n",a);
    printf(" b = %6.2f\n",b);
    printf(" b = %E\n",b);
    y=(int)(x*100+0.5)/100.0;
    printf(" y = %f\n",y);


}