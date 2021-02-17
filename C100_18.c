/**
 * ��һ�������У�2/1��3/2��5/3��8/5��13/8��21/13...
 *
 * ���������е�ǰ20��֮�͡�
 */
#include <stdio.h>

double getValue(int n) {
    if (1 == n) {
        return 2 / 1.0;
    }
    double a0=1, a1=2;
    double b0=1, b1=1;
    double a, b;
    double value = 0;
    for (int i=1; i<n; i++) {
        a = a0+a1;
        b = b0+b1;
        a0 = a1;
        a1 = a;
        b0 = b1;
        b1 = b;
    }
    // printf(" a=%9.6f, b=%9.6f, value=%9.6f\n", a, b, a/b);
    return a / b;
}

double getSum(int n) {
    double sum = 0;
    for (int i=1; i<=n; i++) {
        sum += getValue(i);
    }
    return sum;
}

int main() {
    int n;
    printf(" please input num n(n > 0): ");
    scanf("%d", &n);
    if (n < 0) {
        printf(" n must be larger than 0.\n\n");
        return 0;
    }
    double sum = getSum(n);
    printf(" sum=%9.6f.\n\n", sum);
    return 0;
}
