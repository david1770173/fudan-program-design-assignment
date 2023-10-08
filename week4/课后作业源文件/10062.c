#include<stdio.h>
# define abs(X) (X>0)?(X):-(X)
void swap(double* a,double *b){
    double temp;
    temp = *a;
    *a=*b;
    *b=temp;
}

int main(){
    double a,b,c,d;
    int flag;
    flag=0;
    scanf("%lf%lf%lf",&a,&b,&c);
    if (c>b)swap(&c,&b);
    if (b>a)swap(&a,&b);
    if (c>b)swap(&c,&b);

    if(a<b+c){
        if((a==b||b==c||c==a)&&2*a!=b+c){
            printf("µÈÑü");
            flag=1;
        }          
        if(abs(a*a-b*b-c*c)<0.00001){
            printf("Ö±½Ç");
            flag=1;
        }                    
        if (a==b && b==c){
            printf("µÈ±ß");
            flag=1;
        }          
        if (flag==0 && a*a-b*b-c*c>0)
            printf("¶Û½Ç");
        if (flag==0 && a*a-b*b-c*c<0)
            printf("Èñ½Ç");
    printf("Èý½ÇÐÎ");
    }

}