/**
 * 将一个正整数分解质因数。
 *
 * 例如：输入90,打印出90=2*3*3*5。
 */

#include <stdio.h>

/**
 * print prime number factor
 */
void printPrimeNumberFactor(int n) {
    for (int i=1; i<=n; i++) {
        if (n <= i) {
            printf(" %d", n);
            break;
        }
        for (int j=2; j<=n; j++) {
            if (n % j == 0) {
                if (n == j) {
                    printf(" %d", j);
                } else {
                    printf(" %d *", j);
                }
                n = n / j;
                break;
            }
        }
    }
}

int main() {
    printf(" c:\n");
    int n;
    printf(" please input the num n(n>0): ");
    scanf("%d", &n);
    if (n < 1) {
        printf(" n must be larger than 0.\n\n");
        return 1;
    }
    printPrimeNumberFactor(n);
    printf("\n\n");
    return 0;
}
