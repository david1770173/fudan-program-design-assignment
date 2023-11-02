#include<stdio.h>

void swap(int* a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    
    
}
void Sort(int a[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]<a[j+1])swap(&a[j],&a[j+1]);
        }
    }
}



int main(){
    int a[105],b[105],n,i,j,flag,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        flag=0;
        for(j=0;j<i;j++){
            if(a[j]==a[i])flag=1;
        }
        if(flag==0){
            b[m]=a[i];
            m++;
        }
    }
    Sort(b,m);
    for(i=0;i<m;i++)printf("%d ",b[i]);
    return 0;
}