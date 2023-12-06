#ifndef _12200_h
#define _12200_h

typedef struct{
    char stuName[20];
    char stuId[20];
    float mathScore;
    float chineseScore;
    float englishScore;
} stu_t;

typedef struct{
    stu_t* stuList[20];
    int stuNum;
}class_t;

typedef enum{chinese,math,english,total}subject;


void initializeStu(class_t*,char[],char[],float,float,float);
class_t* initializeClass();
float getAvgBySubject(class_t*,subject);
stu_t* findStuById(class_t*,char*);
class_t* findStuByName(class_t*,char*);
void displayStu(stu_t*);
void displayClass(class_t*);
void sortByScore(class_t*,subject);
float getSum(stu_t*,subject);

#endif