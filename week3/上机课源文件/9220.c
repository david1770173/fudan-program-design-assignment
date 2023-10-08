#include<stdio.h>
int i=1,j=2,k=2,u=47215;
float x=2.2,y=3.4,z=-5.6;
char c1='a',c2='b';

int main(){
    printf("i=%d\t\tj=%d\t\tk=%d\nx=%.5f,y=%.5f,z=%.5f\nx+y=%.2f\ty+z=%.2f\tz+x=%.2f\nu=%d\nc1='%c' or %d(ASCII)\tc2='%c' or %d(ASCII)\t",i,j,k,x,y,z,x+y,y+z,z+x,u,c1,c1,c2,c2);
}
