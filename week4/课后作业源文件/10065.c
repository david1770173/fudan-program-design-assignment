#include <stdio.h>
int main(){
    char c;
    while((c=getchar())!='\n')
        switch (c-'2')
        {
        case 0:
        case 1:putchar(c+4);break;
        case 2:putchar(c+3);
        case 3:putchar(c+2);break;
        default:putchar(c+1);
        }
}