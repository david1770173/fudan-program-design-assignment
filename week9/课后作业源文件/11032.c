#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ����ָ����Χ�ڵ��������
int generateRandomNumber(int min, int max) {
    return min + rand() % (max - min + 1);
}

// �������������ĳ˻�
int calculateProduct(int num1, int num2) {
    return num1 * num2;
}

int main() {
    srand(time(NULL));
    int numQuestions, minRange, maxRange;
    int userAnswer, correctAnswer;
    double totalTime = 0.0;
    int userRank = 1;
    
    printf("��ӭ�μ������˷����Գ���\n");
    printf("������������");
    scanf("%d", &numQuestions);
    printf("������������Χ����Сֵ��");
    scanf("%d", &minRange);
    printf("������������Χ�����ֵ��");
    scanf("%d", &maxRange);
    
    for (int i = 1; i <= numQuestions; i++) {
        int num1 = generateRandomNumber(minRange, maxRange);
        int num2 = generateRandomNumber(minRange, maxRange);
        
        printf("\n���� %d:\n", i);
        printf("%d * %d = ", num1, num2);
        
        time_t startTime = time(NULL);
        scanf("%d", &userAnswer);
        time_t endTime = time(NULL);
        
        double elapsedTime = difftime(endTime, startTime);
        totalTime += elapsedTime;
        
        correctAnswer = calculateProduct(num1, num2);
        
        if (userAnswer == correctAnswer) {
            printf("�ش���ȷ����ʱ %.2lf ��\n", elapsedTime);
        } else {
            printf("�ش������ȷ���� %d\n", correctAnswer);
        }
    }
    
    printf("\n���Խ���������ʱ��%.2lf ��\n", totalTime);

    
    return 0;
}
