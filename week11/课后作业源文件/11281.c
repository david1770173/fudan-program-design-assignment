#include<stdio.h>

void move(char *s1){
    int i;
    for(i=0;s1[i]!='\0';i++){
        s1[i]=s1[i+1];
    }
}
void squeeze(char s1[],char s2[]){
    int i,j;
    for(i=0;s2[i]!='\0';i++){
        for(j=0;s1[j]!='\0';j++){
        if(s2[i]==s1[j]){

            move(s1+j);
        }
    }
    }
    
}
int main(){
    char s[]="ABCXABCZABC";
    squeeze(s,"AC");
    printf("%s",s);
}