#include<stdio.h>
int main(){
    int i,j,k,n=0,temp;
    int a[100];
    for(i=0;i<100;i++){
        scanf("%d",&a[i]);
        if(a[i]==-9999)
            break;
        n++;
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                for(k=j;k<n;k++)
                    a[k]=a[k+1];
                n--;
                j--;
            }
        }
    }
    for(i=0;i<n/2;i++){
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}