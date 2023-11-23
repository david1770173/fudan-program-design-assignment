#include<stdio.h>
#define Max(A,B,C) twoMax(A,twoMax(B,C))
#define twoMax(A,B) (A>B?A:B)

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d",Max(a,b,c));
}