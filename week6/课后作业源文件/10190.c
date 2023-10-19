#include<stdio.h>
int main(){
    int a[105],b[105],cnt=0,n=1,nmax=0,i,j,k=0;
    for(i=0;i<100;i++){
        scanf("%d",&a[i]);
        if(a[i]==-9999)
            break;
        cnt++;
    }
    for(i=0;i<cnt;i++){
        if(a[i]==a[i+1])n++;
        else {
            if(n==nmax){
                b[k]=a[i];
                k++;
            }
            else if(n>nmax){
                for(j=0;j<=k;j++){
                    b[j]=0;
                }
                nmax=n;
                b[0]=a[i];
                k=1;
            }
            n=1;
        }
    }
    printf("平台长度:%d\n平台元素:",nmax);
    for(j=0;j<k;j++){
        printf("%d\t",b[j]);
    }
    }