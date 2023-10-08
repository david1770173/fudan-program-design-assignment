#include<stdio.h>
#define p3(X) (X)*(X)*(X)
void main(){
    int i=100;
    while(i<1000){
        if(i==p3(i/100)+p3(i%10)+p3((i%100-i%10)/10))
            printf("%d\n",i);
        i++;
    }
}