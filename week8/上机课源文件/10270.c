#include<stdio.h>
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
void sort(int *a, int s, int index) {
    for (int i = index; i < s - 1; i++) {
        for (int j = index; j < s - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}

void show(int *a, int s){
    for(int i = 0;i<s;i++)printf("%d",a[i]);
}

int main(){
    int a[100],n,i,j,temp[100];
    printf("length:");
    scanf("%d",&n);
    printf("array:");    
    for(i=0;i<n;i++)scanf("%d",&a[i]);

    while(i>1 && a[i-2]>=a[i-1])i--;
    if(i==1){
        printf("can't be bigger");
        return 0;
    }
    j=i-1;
    
    while(a[i-2]<a[j])j++;

    swap(&a[i-2],&a[j-1]);
    sort(a,n,i-1);
    show(a,n);
}