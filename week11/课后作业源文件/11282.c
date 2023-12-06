#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void swap(char*a[],char*b[]){
    char *temp;
    temp=a[0];a[0]=b[0];b[0]=temp;
    temp=a[1];a[1]=b[1];b[1]=temp;
}
int shuffle(char* deck[][2],char* suit[],char* face[]){
    int k;
    for(int i=0;i<52;i++){
        deck[i][0]=suit[i%4];deck[i][1]=face[i%13];
    }
    for(int i=0;i<52;i++){
        swap(deck[i],deck[rand()%52]);
    }
}
void print(char* deck[][2]){
    for(int i=0;i<52;i++)printf("%s %s    ",deck[i][0],deck[i][1]);
}
int main(){
    char *deck[52][2];
    char *suit[4]={"Spades", "Heart", "Diamonds", "Clubs"};
    char *face[13]={"Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine ", "Ten", "Jack", "Queen", "King"};
    srand(time(NULL));
    shuffle(deck,suit,face);
    print(deck);
}