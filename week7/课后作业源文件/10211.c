#include<stdio.h>
void turn(int a[][4],int n,int t){
    int i,temp;
    for(i=t-1;i<n-t;i++){
        temp=a[n-i-1][t-1];
        a[n-i-1][t-1]=a[n-t][n-i-1];
        a[n-t][n-i-1]=a[i][n-t];
        a[i][n-t]=a[t-1][i];
        a[t-1][i]=temp;}
}
int main(){
    int a[4][4]={{1,3,4,10},{2,5,9,11},{6,8,12,15},{7,13,14,16}};
    int n=4,i,j;
    for(i=1;i<=(n+1)/2;i++)turn(a,4,i);
    printf("Ë³Ê±Õë\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    for(i=1;i<=(n+1)/2;i++)turn(a,4,i);
    for(i=1;i<=(n+1)/2;i++)turn(a,4,i);
    printf("ÄæÊ±Õë\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }

}