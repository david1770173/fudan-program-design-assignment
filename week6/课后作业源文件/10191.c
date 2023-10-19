#include <stdio.h>
#include <stdlib.h>

void Primes(int n) {
    int isPrime[n+1];
    for (int i = 0; i <= n; i++) {
        isPrime[i] = 1;
    }
    isPrime[0] = isPrime[1] = 0;
    for (int p = 2; p * p <= n; p++) { //�Ż����㷨����p�ı�����С��p^2����һ���б�pС������
        if (isPrime[p]) {
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = 0;
            }}}
    printf("С�ڵ���%d�������У�\n", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            printf("%d ", i);
        }}
    printf("\n");}
int main() {
    int n;
    printf("������һ��������n������С�ڵ���n������������ ");
    scanf("%d", &n);
    Primes(n);
    return 0;
}
