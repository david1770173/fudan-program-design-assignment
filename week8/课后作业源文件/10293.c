#include <stdio.h>

int main() {
    int n, i, j;
    int num[100]; 
    int count[100] = {0}; 
        int maxCount = 0;
    int mostFrequentNum = num[0];
    printf("������ n (0 < n < 100)��");
    scanf("%d", &n);
    if (n <= 0 || n >= 100) {
        printf("n �ķ�ΧӦ���� 0 �� 100 ֮�䡣\n");
        return 1;
    }
    printf("������ %d ��������\n", n);
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
    printf("���ִ������������� %d�����ִ���Ϊ %d �Ρ�\n", mostFrequentNum, maxCount);
    return 0;
}
