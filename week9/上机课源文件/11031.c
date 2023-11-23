#include<stdio.h>
int gsd(int a,int b,int c){
    if(a%b!=0){
        return gsd(a+c,b,c);
    }
    return a;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",gsd(a,b,a));
}