#include <stdio.h>
int main(){
    int s=0,i;
    for(i=0;i<5;i++){
        s=2*(s+1);
    }
    printf("%d\n",s);
    s=0;
    for(i=0;i<5;i++){

        printf("第%d天猴子吃掉了%d个果子\n",5-i,s+2);
        s=2*(s+1);
    }

}