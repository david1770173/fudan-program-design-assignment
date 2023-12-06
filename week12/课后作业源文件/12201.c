#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "12201.h"
int main()
{
    char *deck[52][2];
    char *suit[4] = {"Spades", "Heart", "Diamonds", "Clubs"};
    char *face[13] = {"Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine ", "Ten", "Jack", "Queen", "King"};
    srand(time(NULL));
    shuffle(deck, suit, face);
    player_t *player;
    player = initializePlayer(deck);
    status_t status;
    status.owner = NULL;
    status.rank = NULL;
    status.win = 0;
    while (1)
    {
        deal(player, &status);
        if(status.win==1)return 0;
        player = player->next;
    }
}

void swap(char *a[], char *b[])
{
    char *temp;
    temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    temp = a[1];
    a[1] = b[1];
    b[1] = temp;
}
int shuffle(char *deck[][2], char *suit[], char *face[])
{
    int k;
    for (int i = 0; i < 52; i++)
    {
        deck[i][0] = suit[i % 4];
        deck[i][1] = face[i % 13];
    }
    for (int i = 0; i < 52; i++)
    {
        swap(deck[i], deck[rand() % 52]);
    }
}

player_t *initializePlayer(char *deck[][2])
{
    player_t *p1 = NULL, *p2 = NULL, *p3 = NULL, *p4 = NULL;
    p1 = malloc(sizeof(player_t));
    p2 = malloc(sizeof(player_t));
    p3 = malloc(sizeof(player_t));
    p4 = malloc(sizeof(player_t));
    p1->cards = deck;
    p2->cards = deck + 13;
    p3->cards = deck + 26;
    p4->cards = deck + 39;
    for (int i = 0; i < 13; i++)
    {
        p1->cardsRemain[i] = 1;
        p2->cardsRemain[i] = 1;
        p3->cardsRemain[i] = 1;
        p4->cardsRemain[i] = 1;
    }
    p1->next = p2;
    p2->next = p3;
    p3->next = p4;
    p4->next = p1;
    return p1;
}

void display(player_t *player)
{
    for (int i = 0; i < 13; i++)
    {
        if (player->cardsRemain[i])
        {
            printf("%d:%s %s  ", i + 1, player->cards[i][0], player->cards[i][1]);
        }
    }
    printf("\n");
}

status_t *deal(player_t *player, status_t *status)
{
    int s;
    int flag = 0;
    if (player == status->owner)
    {
        status->rank = "zero";
    }
    if (status->owner == NULL)
    {
        status->owner = player;
        status->rank = "zero";
    }
    display(player);
    printf("目前牌面:%s\n", status->rank);

    while (1)
    {
        printf("输入序号出牌，或输入0跳过:");
        scanf("%d", &s);
        if ((!s)&&(faceToInt(status->rank)))
        {
            return status;
        }
        else
        {

            if (player->cardsRemain[s - 1] == 1 && faceToInt(status->rank) < faceToInt(player->cards[s - 1][1]))
            {
                player->cardsRemain[s - 1] = 0;
                status->owner = player;
                status->rank = player->cards[s - 1][1];
                if(isWin(player)){
                    printf("YOU WIN!!!!!!!!!!");
                    status->win=1;
                    return status;
                }
                return status;
            }
        }
    }
};

int faceToInt(char *face)
{
    if (!strcmp(face, "zero"))
        return 0;
    if (!strcmp(face, "Ace"))
        return 1;
    if (!strcmp(face, "Deuce"))
        return 2;
    if (!strcmp(face, "Three"))
        return 3;
    if (!strcmp(face, "Four"))
        return 4;
    if (!strcmp(face, "Five"))
        return 5;
    if (!strcmp(face, "Six"))
        return 6;
    if (!strcmp(face, "Seven"))
        return 7;
    if (!strcmp(face, "Eight"))
        return 8;
    if (!strcmp(face, "Nine"))
        return 9;
    if (!strcmp(face, "Ten"))
        return 10;
    if (!strcmp(face, "Jack"))
        return 11;
    if (!strcmp(face, "Queen"))
        return 12;
    if (!strcmp(face, "King"))
        return 13;
};

int isWin(player_t *player)
{
    int flag = 1;
    for (int i = 0; i < 13; i++)
    {
        if (player->cardsRemain[i] == 1)
        {
            flag = 0;
        }
    }
    return flag;
}