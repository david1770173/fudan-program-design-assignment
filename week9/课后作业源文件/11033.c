#include<stdio.h>
#define Run(A) (A%400==0 || A%4==0 && A%100!=0)
int main(){
    int n;
    scanf("%d",&n);
    if(Run(n)){
        printf("»Ú");
    }
    else printf("≤ª»Ú");
}