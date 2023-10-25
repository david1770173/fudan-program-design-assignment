#include<stdio.h>
int main(){
    char c;
    int a[52],i;
    for (i=0;i<52;i++) a[i]=0;
    while(scanf("%c",&c) != EOF){
        if (c=='\n') break;
        else if (c<='Z' && c>='A'){
            a[c-'A']++;
        }
        else if (c<='z' && c>='a'){
         a[c-'a'+26]++;
        }
    }
    for (i=0;i<26;i++) printf("%c: %d\t",'A'+i,a[i]);
    printf("\n");
    for (i=0;i<26;i++) printf("%c: %d\t",'a'+i,a[i+26]);
}