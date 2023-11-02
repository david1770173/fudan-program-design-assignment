#include <stdio.h>
#include <string.h>

void swap(char* a,char *b){
    char temp[100];
    strcpy(temp,a);
    strcpy(a,b);
    strcpy(b,temp);
    
    
}
void Sort(char dict[][100],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(strcmp(dict[j],dict[j+1])>0)swap(dict[j],dict[j+1]);
        }
    }
}

int main(){
    int n,i,j;
    char dict[10][100];
    scanf("%d",&n);
    for (i=0;i<n;i++)scanf("%s",dict[i]);
    Sort(dict,n);
    for (i=0;i<n;i++)printf("%s\n",dict[i]);
    return 0;
}