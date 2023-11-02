#include<stdio.h>
#include<string.h>
void delete(char* s,int start,int size){
    strcpy(s+start-1,s+start+size-1); 
}
int ifin(char c,char s[]){
    int i=0;
    while(s[i]!='\000'){
        if(s[i]==c)return 1;
        i++;
    }
    return 0;
}
int main(){
    int i=0;
    char s1[100],s2[100];
    scanf("%s",s1);
    scanf("%s",s2);

    while(s1[i]!='\000'){
        if(ifin(s1[i],s2)){
            delete(s1,i+1,1);
            i--;
        }
        i++;
    }
    printf("%s",s1);
}