#include<stdio.h>
int main(){
    char c;
    int a[10],i;
    for (i=0;i<10;i++) a[i]=0;
    while(scanf("%c",&c) != EOF){
        if (c=='\n') break;
        else if (c<='9' && c>='0'){
            a[c-'0']++;
        }
    }
    for (i=0;i<10;i++) printf("%d: %d\n",i,a[i]);
}