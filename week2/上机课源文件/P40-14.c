#include<stdio.h>
int main(){
    int a,b;
    double c;
    scanf("%d%d",&a,&b);
    c=a/(float)b;
    printf("%d %d %d %.5f %d",a+b,a-b,a*b,c,a%b);
    return 0;

}