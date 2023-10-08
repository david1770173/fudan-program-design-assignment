#include<stdio.h>
void main(){
    float x,y;
    printf("\t*****个人所得税计算器*****\n\n");
    printf("请输入您的薪资总金额（其中免税金额为3500元：）");
    scanf("%f",&x);
    if(x<=3500){
        printf("您太穷了，不需要征收个人所得税");
        return;
    }
    if(x<=5000)
        y=(x-3500)*0.03;
    else if(x<=8000)
        y=(x-3500)*0.1-105;
    else if(x<=12500)
        y=(x-3500)*0.2-555;
    else
        y=(x-3500)*0.25-1005;
    printf("您的德应税金额：%.2f，应交个人所得税为：%.2f\n",x,y);

}