#include<stdio.h>
void swap(int* a,int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    a<b?swap(&a,&b):0;
    b<c?swap(&b,&c):0;
    a<b?swap(&a,&b):0;
    printf("%d %f %d %d",a+b+c,(a+b+c)/3.0,a,c);


}