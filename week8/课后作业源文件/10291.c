#include <stdio.h>
#include <string.h>
/*
�⿴�ſ��ܲ�̫�ԣ�����׼����strcpy��ʵ�ַ�ʽ��֤�������������
*/
int delete(char* s,int start,int size){
    strcpy(s+start-1,s+start+size-1); 
}
int main(){
    int m,k,n;
    char s[100];
    gets(s);
    scanf("%d%d",&k,&m);
    delete(s,k,m);
    printf("%s",s);
    return 0;
}