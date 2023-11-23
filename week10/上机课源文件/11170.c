#include<stdio.h>
int concat(char* a,char* b){
    int i,j;
    for(i=0;a[i]!='\0';i++);
    for(j=0;b[j]!='\0';j++){
        *(a+i+j)=*(b+j);
        }
    *(a+j+i)='\0';

    return i+j;
}
int main(){
    char a[100]="HelloWorld";
    char b[100]="FudanUniversity";
    int n;
    n=concat(a,b);
    printf("%s",a);
    printf("\n%d",n);
}