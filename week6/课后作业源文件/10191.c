#include <stdio.h>
#include <stdlib.h>

void Primes(int n) {
    int isPrime[n+1];
    for (int i = 0; i <= n; i++) {
        isPrime[i] = 1;
    }
    isPrime[0] = isPrime[1] = 0;
    for (int p = 2; p * p <= n; p++) { //优化了算法，是p的倍数但小于p^2的数一定有比p小的因子
        if (isPrime[p]) {
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = 0;
            }}}
    printf("小于等于%d的质数有：\n", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            printf("%d ", i);
        }}
    printf("\n");}
int main() {
    int n;
    printf("请输入一个正整数n，查找小于等于n的所有质数： ");
    scanf("%d", &n);
    Primes(n);
    return 0;
}
