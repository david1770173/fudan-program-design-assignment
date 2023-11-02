#include<stdio.h>
#include<string.h>
int compare(int*a,char* s1,int i){
    int m;
    for(m=0;m<=a[1]-a[0];m++){
        if(s1[a[0]+m]>s1[i+m])return 1;
        if(s1[a[0]+m]<s1[i+m])return -1;
    }
    return 0;
}
int show(int*a,char *s1){
    int m;
    for(m=a[0];m<=a[1];m++)printf("%c",s1[m]);
}
int main(){
    char s1[50],s2[50];
    int len1,len2,i,j,k,u,v,max,cnt;
    int a[4];
    scanf("%s %s",s1,s2);
    len1=strlen(s1);
    len2=strlen(s2);

    for(i=0;i<len1;i++){
        for(j=0;j<len2;j++){
            u=i;
            v=j;
            cnt=0;
            while(u<len1&&v<len2&&s1[u]==s2[v]){
                u++;
                v++;
                cnt++;
            }
            if(cnt>max){a[0]=i;a[1]=u-1;a[2]=j;a[3]=v-1;max=cnt;}
            else if(cnt==max){
                if(compare(a,s1,i)==-1){a[0]=i;a[1]=u-1;a[2]=j;a[3]=v-1;}
            }}}
    show(a,s1);
}