#include<stdio.h>

int main(){
    int i;
    char c;
    long k;
    float f;
    double x;
    scanf("i=%d c=%c",&i,&c);
    scanf("k=%ld",&k);
    scanf("f=%f x=%lf",&f,&x);
    printf("i=%d c=%c k=%ld f=%f x=%lf",i,c,k,f,x);
}
