#ifndef _12010_h
#define _12010_h

typedef struct 
{
    char * name;
    char * phone_number; 
    char * address;
}user_t;

void print_user(user_t*);

user_t* set_user(char*,char*,char*);

void free_user(user_t*);
#endif