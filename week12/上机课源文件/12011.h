#ifndef _12011_h
#define _12011_h
#define M 100

typedef struct{
    char word[20];    /*单词名*/
    int count;            /*单词计数器*/
}keyTab_t;

keyTab_t* initialize_tab(char *);
int check_tab(keyTab_t**,int,char *);
void export_tab(keyTab_t**,int);
void print_keytab(keyTab_t*);
#endif