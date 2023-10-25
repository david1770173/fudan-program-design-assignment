#include<stdio.h>
int main(){
    int n,i;
    char s1[50],s2[50];
    scanf("%s",s1);
    scanf("%s",s2);
    scanf("%d",&n);
    for (i=0;i<n;i++){
        s2[i]=s1[i];
    }
    printf("%s",s2);
    }