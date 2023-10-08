#include<stdio.h>
int main(){
    int a,b;
    
    scanf("%d%d",&a,&b);
    if (a>b){
        printf("%d>%d\n",a,b);
        printf("%d!=%d\n",a,b);
    }
    else if (a<b)
    {
        printf("%d<%d\n",a,b);
        printf("%d!=%d\n",a,b);
    }
    else if (a==b){
        printf("%d=%d\n",a,b);
    }
    else{
        printf("not comparable");        
    }
    if(a%b==0){
        printf("%dÕû³ý%d\n",b,a);
    }
    if(b%a==0){
        printf("%dÕû³ý%d\n",a,b);
    }
}