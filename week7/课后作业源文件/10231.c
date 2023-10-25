#include<stdio.h>
int main(){
    int n,i,j,temp,k;
    char s1[50],s2[50];
    scanf("%s",s1);
    scanf("%s",s2);
    for (i=0;s1[i]!='\0';i++);
    for (j=0;s2[j]!='\0';j++);
    for (k=j;k>=0;k--)s2[k+i]=s2[k];
    for (i=i-1;i>=0;i--)s2[i]=s1[i];
    printf("%s",s2);
    }