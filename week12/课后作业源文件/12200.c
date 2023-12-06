#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "12200.h"
int main()
{
    class_t *class;
    class = initializeClass();
    int choice, choice2;
    char stuName[20], stuId[20];
    float score1, score2, score3;
    printf("******************\n      welcome\n******************\n");

    while (1)
    {
        printf("1.set student\n");
        printf("2.calculate average\n");
        printf("3.find student by id\n");
        printf("4.find student by name\n");
        printf("5.display all students\n");
        printf("6.sort by score\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            scanf("%s%s%f%f%f", stuName, stuId, &score1, &score2, &score3);
            initializeStu(class, stuName, stuId, score1, score2, score3);
            break;
        case 2:
            printf("select subject:0.chinese1.math2.english3.total:");
            scanf("%d", &choice2);
            float score;
            score = getAvgBySubject(class, choice2);
            printf("%f\n", score);
            break;
        case 3:
            printf("id:");
            scanf("%s", stuId);
            displayStu(findStuById(class, stuId));
            break;
        case 4:
            printf("name:");
            scanf("%s", stuName);
            displayClass(findStuByName(class, stuName));
            break;
        case 5:
            displayClass(class);
            break;
        case 6:
            printf("select subject:0.chinese1.math2.english3.total:");
            scanf("%d", &choice2);
            sortByScore(class, choice2);
            break;
        }
    }
}

class_t *initializeClass()
{
    class_t *class;
    class = malloc(sizeof(class_t));
    class->stuNum = 0;
    return class;
}

void initializeStu(class_t *class, char stuName[], char stuId[], float chineseScore, float mathScore, float englishScore)
{
    stu_t *stu = malloc(sizeof(stu_t));
    if (stu == NULL)
    {
        fprintf(stderr, "ERROR:failed to allocate memory for stu");
        exit(1);
    }
    stu->chineseScore = chineseScore;
    stu->mathScore = mathScore;
    stu->englishScore = englishScore;
    strcpy(stu->stuId, stuId);
    strcpy(stu->stuName, stuName);
    class->stuList[class->stuNum] = stu;
    class->stuNum++;
}

void displayStu(stu_t *stu)
{
    printf("%-20s %-20s %f\t%f\t%f\n", stu->stuName, stu->stuId, stu->chineseScore, stu->mathScore, stu->englishScore);
}

void displayClass(class_t *class)
{
    for (int i = 0; i < class->stuNum; i++)
    {
        displayStu(class->stuList[i]);
    }
}
// students may have the same names
class_t *findStuByName(class_t *class, char *stuName)
{
    class_t *tempClass = initializeClass();
    for (int i = 0; i < class->stuNum; i++)
    {
        if (!strcmp(stuName, class->stuList[i]->stuName))
        {
            initializeStu(tempClass, class->stuList[i]->stuName, class->stuList[i]->stuId, class->stuList[i]->chineseScore,
                          class->stuList[i]->mathScore, class->stuList[i]->englishScore);
        }
    }
    return tempClass;
}

stu_t *findStuById(class_t *class, char *stuId)
{
    for (int i = 0; i < class->stuNum; i++)
    {
        if (!strcmp(stuId, class->stuList[i]->stuId))
        {
            return class->stuList[i];
        }
    }
}

float getAvgBySubject(class_t *class, subject sub)
{
    float avg = 0;

    for (int i = 0; i < class->stuNum; i++)
    {
        avg += getSum(class->stuList[i], sub) / class->stuNum;
    }
    return avg;
}

void sortByScore(class_t *class, subject sub)
{
    int rank[50];
    int temp;
    for (int i = 0; i < 50; i++)
        rank[i] = i;

    for (int i = 0; i < class->stuNum - 1; i++)
    {
        for (int j = 0; j < class->stuNum - i - 1; j++)
        {
            if (getSum(class->stuList[rank[j]], sub) < getSum(class->stuList[rank[j + 1]], sub))
            {
                temp = rank[j];
                rank[j] = rank[j + 1];
                rank[j + 1] = temp;
                for (int p = 0; p < 4; p++)
                    ;
            }
        }
    }
    for (int i = 0; i < class->stuNum; i++)
    {
        displayStu(class->stuList[rank[i]]);
    }
}

float getSum(stu_t *stu, subject sub)
{
    switch (sub)
    {
    case 0:
        return stu->chineseScore;
    case 1:
        return stu->mathScore;
    case 2:
        return stu->englishScore;
    case 3:
        return stu->chineseScore + stu->mathScore + stu->englishScore;
    }
}