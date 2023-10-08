#include<stdio.h>
int main(){
    int a,i,j;
    scanf("%d",&a);
    for(i=0;i<2*a-1;i++)
        printf("*");
    printf("\n");
    for(i=1;i<a-1;i++){
        for(j=0;j<i;j++)
            printf(" ");
        printf("*");
        for(j=0;j<2*a-2*i-3;j++)
            printf(" ");
        printf("*\n");
    }
    for(i=1;i<a;i++)
        printf(" ");
    printf("*");
}