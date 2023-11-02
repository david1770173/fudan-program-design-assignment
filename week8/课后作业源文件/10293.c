#include <stdio.h>

int main() {
    int n, i, j;
    int num[100]; 
    int count[100] = {0}; 
        int maxCount = 0;
    int mostFrequentNum = num[0];
    printf("请输入 n (0 < n < 100)：");
    scanf("%d", &n);
    if (n <= 0 || n >= 100) {
        printf("n 的范围应该在 0 到 100 之间。\n");
        return 1;
    }
    printf("请输入 %d 个整数：\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (num[i] == num[j]) {
                count[i]++;
            }
        }
    }


    for (i = 0; i < n; i++) {
        if (count[i] > maxCount || (count[i] == maxCount && num[i] > mostFrequentNum)) {
            maxCount = count[i];
            mostFrequentNum = num[i];
        }
    }
    printf("出现次数最多的整数是 %d，出现次数为 %d 次。\n", mostFrequentNum, maxCount);
    return 0;
}
