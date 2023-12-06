#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"12011.h"

int main(){
    char *word;
    int len=0;
    keyTab_t* tab[M];
    printf("type -E to export\n");
    while(1){
        scanf("%s",word);
        if(strcmp(word,"-E")==0){
            export_tab(tab,len);
        }
        else{
            len = check_tab(tab,len,word);
        }
    }
}

keyTab_t* initialize_tab(char * word){
    keyTab_t* keyTab = NULL;
    keyTab = malloc(sizeof(keyTab_t));
    keyTab->count = 1;
    strcpy(keyTab->word,word);
    return keyTab;
}
int check_tab(keyTab_t** head,int len,char* word){
    int flag=0;
    for(int i=0;i<len;i++){
        if (strcmp((*(head+i))->word,word) == 0){
            (*(head+i))->count++;
            flag=1;
            print_keytab(*(head+i));
            break;
        }
    }
    if(flag==0){
        *(head+len)=initialize_tab(word);
        print_keytab(*(head+len));
        len=len+1;
    }
    return len;
}

void print_keytab(keyTab_t* tab){
    printf("word:%s\tcount:%d\n",tab->word,tab->count);
}

void export_tab(keyTab_t** head,int len){
    for(int i=0;i<len;i++){
        print_keytab(*(head+i));
    }
}
