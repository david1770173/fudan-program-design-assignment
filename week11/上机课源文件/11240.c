#include<stdio.h>
void c_swap(char **s1,char **s2){
    char* temp;
    temp=*s1;
    *s1=*s2;
    *s2=temp;
}

int main(){
    char *s1="Shanghai";
    char *s2="Beijing";
    c_swap(&s1,&s2);
    printf("%s\n",s1);
    printf("%s\n",s2);
}