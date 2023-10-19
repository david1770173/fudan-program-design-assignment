#include<stdio.h>
int main(){
    int a[15],b[15],cnt=0,i,j,k;
    for(i=0;i<100;i++){
        scanf("%d",&a[i]);
        if(a[i]==-9999)
            break;
        cnt++;
    }
    for(i=0;i<100;i++){
        if(a[i]!=-9999)printf("%d ",a[i]);
        else break;
    }
    printf("\n");
    for(i=0;i<cnt;i++){
        for(j=i+1;j<cnt;j++){
            if(a[i]==a[j]){
                for(k=j;k<cnt;k++)
                    a[k]=a[k+1];
                cnt--;
                j--;
            }
        }
    }

    for(i=0;i<100;i++){
        if(a[i]!=-9999)printf("%d ",a[i]);
        else break;
    }
}