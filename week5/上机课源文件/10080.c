#include<stdio.h>
int main(){
    int a,b=0,c;
    scanf("%d",&a);
    c=a;
    while(a!=0){
        b=10*b+a%10;
        a=a/10;
    }
    if(c==b)
        printf("%d�ǻ�����",c);
    else
        printf("%d���ǻ�����",c);
}