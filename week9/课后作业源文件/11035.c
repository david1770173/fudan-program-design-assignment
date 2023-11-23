#include<stdio.h>
#include<string.h>
int huiwen(char a[],int n){
    if(2*n>strlen(a))return 'Y';
    if(a[n]==a[strlen(a)-n-1])return huiwen(a,n+1);
    return 'N';

}
int main(){
    char a[100];
    scanf("%s",a);
    printf("%c",huiwen(a,0));

}