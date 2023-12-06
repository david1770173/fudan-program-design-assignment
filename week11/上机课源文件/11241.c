#include<stdio.h>
void is_prime(int x[],int n){
    int a=2;
    int flag=1;
    for(int i=0;i<n;i++){
        x[i]=a;
        do{ 
            flag=0;
            a++;
            for(int j=0;j<=i;j++){
                if(a%x[j]==0){
                    flag=1;
                }
            }
        }while(flag==1);

    }
}
int main(){
    int x[1000],n;
    scanf("%d",&n);
    is_prime(x,n);
    for(int i=0;i<n;i++){
        printf("%d\t",x[i]);
    }
}