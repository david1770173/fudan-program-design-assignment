#include<stdio.h>
#include<stdlib.h>

#include"12010.h"


int main(){
    user_t* user1;
    user1 = set_user("admin","000000000000","fudan");
    print_user(user1);
    free_user(user1);
    return 0;
}


void print_user(user_t* user){
    printf("name:%s\nphone number:%s\naddress:%s\n"\
        ,user->name,user->phone_number,user->address);
}

user_t* set_user(char* name,char* phone_number,char* address){
    user_t* user;
    user = (user_t*)malloc(sizeof(user_t));
    if(user==NULL){
        fprintf(stderr,"ERROR:unable to allocate memory for user\n");
        exit(1);
    }
    user->name = name;
    user->address = address;
    user->phone_number = phone_number;
    printf("Warning: needed to be freed before the pointer is dumped\n");
    return user;
}

void free_user(user_t* user){
    void* temp=user;
    free(user);
    printf("%p freed from heap\n",temp);
}