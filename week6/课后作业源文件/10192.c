#include<stdio.h>
int main(){
    int n,p[100],m,x=1,i=0,flag,j,k;
    scanf("%d",&n);
    scanf("%d",&m);
    while(i<=n){
        x++;
        flag=0;
        for(j=0;j<i;j++){
            if(x%p[j]==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            p[i]=x;
            i++;
        }
    }
    flag=0;
    for(j=0;j<i;j++){
        if(p[j]*p[j]>m)break;
        if(m%p[j]==0){
            flag=1;
            break;
        }
    }
    if(flag==0)printf("%d是质数",m);
    else printf("%d不是质数",m);
}