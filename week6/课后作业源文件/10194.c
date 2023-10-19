#include<stdio.h>
int main(){
    int a[5][5],i,j,cnt=1;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++)a[i][j]=0;
    }
    a[0][0]=cnt++;
    for(i=1;i<5;i++){
        a[i-1][i]=cnt++;
        a[i][i-1]=cnt++;
        a[i][i]=cnt++;
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++)
            printf("%4d",a[j][i]);
        printf("\n");
    }
}