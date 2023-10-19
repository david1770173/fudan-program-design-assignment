#include<stdio.h>

int main(){
    int cnt=1,n;
    scanf("%d",&n);
    while(cnt<n+1){
        cnt++;
        while(n%cnt==0){
            n/=cnt;
            printf("%d",cnt);
            if (n==1) return 0;
            printf("*");
        }
    }
}