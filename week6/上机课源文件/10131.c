#include<stdio.h>
int main(){
    int i,j,n,temp,key,m,a[100];
    printf("���������ĸ�����");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp =a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("���������ҵ�����");
    scanf("%d",&key);
    i=0;
    j=n-1;
    while(i<=j){
        m=(i+j)/2;
        if(key==a[m])break;
        if(key>a[m])i=m+1;
        else j=m-1;
    }
    if(i<=j)printf("�ҵ� �������к����±�Ϊ%d",m);
}