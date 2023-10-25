#include<stdio.h>
#include<string.h>
int main(){
    char s[30];
    int i,j,k;
    scanf("%s",s);
    for(i=0;i<strlen(s)-1;i++){
        for(j=i+1;j<strlen(s);j++){
            if (s[j]==s[i]){
                for(k=j;k<strlen(s);k++){
                    s[k]=s[k+1];
                }
                j--;
            }

        }
    }
    printf("%s",s);
}