#include<stdio.h>

int huiwen(char* p,int n){
    if(n<=1) return 1;
    if(*p==*(p+n-1)) return huiwen(p+1,n-2);
    else return 0;
}

int main(){
    char s[100];
    int i;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++);
    printf("%d",huiwen(s,i));
}