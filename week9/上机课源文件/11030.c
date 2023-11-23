#include <stdio.h>
int isPrime(int n){
    int i;
    for(i=2;i*i<=n;i++){
        if(n%i==0)return 0;
        }
    return 1;
}

int main(){
    int i,n;
    scanf("%d",&n);
    if(isPrime(n))printf("是质数\n");
    else printf("不是质数\n");
    scanf("%d",&n);
    if(isPrime(n))printf("是质数\n");
    else printf("不是质数\n");
    for(i=2;i<=1000;i++){
        if(isPrime(i))printf("%d ",i);
    }
}   