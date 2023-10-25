#include<stdio.h>
int main(){
    char s1[50];
    int i=0,j;
    scanf("%[^\n]",s1);
    while (s1[1]==' '){
        i=0;
        while(s1[i+1]!='\0'){
            s1[i]=s1[i+1];
            i++;
        }
    }
    i=0;
    while(s1[i]!='\0')i++;
    while(s1[i]==' ')i--;
    s1[i+1]='\0';
    for(i=0;s1[i]!='\0';i++){
        if(s1[i]==' ' && s1[i+1]==' '){
            for(j=i;s1[j]!='\0';j++){
                s1[j]=s1[j+1];
            }
            i--;
        }
    }
    printf("%s",s1);
    }