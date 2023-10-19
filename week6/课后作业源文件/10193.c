#include<stdio.h>
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int m,n,i,j,a[100],c=1,d=2,cnt=0;
    swap(&c,&d);
    scanf("%d%d",&m,&n);
    for(i=0;i<100;i++){
        scanf("%d",&a[i]);
        if(a[i]==-9999)
            break;
    }
    cnt=i;
    for(i=0;i<m;i++){
        for(j=0;j<n-1;j++)
        swap(&a[j],&a[j+1]);
    }
    for(i=0;i<cnt;i++)printf("%d ",a[i]);

}