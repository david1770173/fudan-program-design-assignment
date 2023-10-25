#include<stdio.h>
int main(){
    char s1[50];
    int i=0;
    scanf("%s",s1);
    while (s1[i]!='\0'){
        if(s1[i]>='a'&&s1[i]<='z')s1[i]=s1[i]+'A'-'a';
        i++;
    }
    printf("%s",s1);
    }