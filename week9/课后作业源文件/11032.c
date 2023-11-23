#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 生成指定范围内的随机整数
int generateRandomNumber(int min, int max) {
    return min + rand() % (max - min + 1);
}

// 计算两个整数的乘积
int calculateProduct(int num1, int num2) {
    return num1 * num2;
}

int main() {
    srand(time(NULL));
    int numQuestions, minRange, maxRange;
    int userAnswer, correctAnswer;
    double totalTime = 0.0;
    int userRank = 1;
    
    printf("欢迎参加整数乘法测试程序！\n");
    printf("请输入题量：");
    scanf("%d", &numQuestions);
    printf("请输入整数范围的最小值：");
    scanf("%d", &minRange);
    printf("请输入整数范围的最大值：");
    scanf("%d", &maxRange);
    
    for (int i = 1; i <= numQuestions; i++) {
        int num1 = generateRandomNumber(minRange, maxRange);
        int num2 = generateRandomNumber(minRange, maxRange);
        
        printf("\n问题 %d:\n", i);
        printf("%d * %d = ", num1, num2);
        
        time_t startTime = time(NULL);
        scanf("%d", &userAnswer);
        time_t endTime = time(NULL);
        
        double elapsedTime = difftime(endTime, startTime);
        totalTime += elapsedTime;
        
        correctAnswer = calculateProduct(num1, num2);
        
        if (userAnswer == correctAnswer) {
            printf("回答正确！用时 %.2lf 秒\n", elapsedTime);
        } else {
            printf("回答错误，正确答案是 %d\n", correctAnswer);
        }
    }
    
    printf("\n测试结束！总用时：%.2lf 秒\n", totalTime);

    
    return 0;
}
