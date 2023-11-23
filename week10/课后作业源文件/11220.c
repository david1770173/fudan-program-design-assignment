#include<stdio.h>
#define print_array(N,n)for(int i=0;n*i<N;i++){for(int j=0;j<n&&n*i+j<N;j++){printf("%d ",a[n*i+j]);}printf("\n");}

int main(){
    int a[100]={1,2,3,4,5,6,7,8,9,10,11,12};
    print_array(9,3);
    print_array(10,4);
}