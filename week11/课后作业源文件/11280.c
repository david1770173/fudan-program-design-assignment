#include<stdio.h>

int add(int a,int b){
    return a+b;
}

int subtract(int a,int b){
    return a-b;
}


int multiply(int a,int b){
    return a*b;
}


int divde(int a,int b){
    return a/b;
}

int execute(int (*p)(int,int),int a,int b){
    return (*p)(a,b);//or p(a,b) but why?
}

int main(){
    int a,b,choice;
    printf("1:加法\n2：减法\n3：乘法\n4：除法\n");
    scanf("%d",&choice);
    printf("\n两个数：\n");
    scanf("%d%d",&a,&b);
    
    switch(choice){
    case 1:
        printf("%d",execute(&add,a,b));
        break;
    
    case 2:
        printf("%d",execute(&subtract,a,b));
        break;
    
    case 3:
        printf("%d",execute(&multiply,a,b));
        break;
    case 4:
        printf("%d",execute(&divde,a,b));
        break;
    }

}

