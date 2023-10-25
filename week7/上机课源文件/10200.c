#include<stdio.h>
int turn(int step[]){
    if(step[0]==1){step[0]=0;step[1]=1;return 0;}
    if(step[0]==-1){step[0]=0;step[1]=-1;return 0;}
    if(step[1]==1){step[0]=-1;step[1]=0;return 0;}
    if(step[1]==-1){step[0]=1;step[1]=0;return 0;}
}
int main(){
    int a[20][20]={0},n;
    int step[2]={1,0},x=0,y=0,i,j;
    scanf("%d",&n);
    for(i=1;i<=n*n;i++){
        a[y][x]=i;
        if(x+step[0]>-1&&y+step[1]>-1&&x+step[0]<n&&y+step[1]<n&&a[y+step[1]][x+step[0]]==0){
            ;
        }
        else{turn(step);}
        x+=step[0];
        y+=step[1];        
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
}