/**
 * Çó1+2!+3!+...+20!µÄºÍ
 */
#include <stdio.h>

long getJieCheng(int n) {
    unsigned long val = 1;
    for (int i=1; i<=n; i++) {
        val *= i;
    }
    return val;
}

unsigned long getSum(int n) {
    unsigned long sum = 0;
    for (int i=1; i<=n; i++) {
        sum += getJieCheng(i);
    }
    return sum;
}

int main() {
    int n;
    printf(" please input n(n>0): ");
    scanf("%d", &n);
    if (n < 1) {
        printf(" n must be larger than 0.\n\n");
        return 1;
    }
    unsigned long sum = getSum(n);
    printf(" sum = %ld.\n\n", sum);
    return 0;
}
