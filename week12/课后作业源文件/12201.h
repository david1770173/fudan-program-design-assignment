#ifndef _12201_h
#define _12201_h
typedef struct player_s
{
    char*(*cards)[2];
    int cardsRemain[13];
    struct player_s* next;
}player_t;

typedef struct{
    char* rank;
    player_t* owner;
    int win;
}status_t;

void swap(char*a[],char*b[]);
int shuffle(char* deck[][2],char* suit[],char* face[]);
player_t* initializePlayer(char *[][2]);
status_t* deal(player_t*,status_t*);
void display(player_t*);
int faceToInt(char*);
int isWin(player_t*);

#endif