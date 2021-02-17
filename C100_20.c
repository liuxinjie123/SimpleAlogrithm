/**
 * 利用递归方法求5!
 */
#include <stdio.h>

unsigned long getJieCheng(int n) {
    unsigned long val = 1;
    if (n <= 1) { return 1; }
    val = n * getJieCheng(n-1);
    return val;
}

int main() {
    int n;
    printf(" please input n(n>0): ");
    scanf("%d", &n);
    unsigned val = getJieCheng(n);
    printf(" val = %d\n\n", val);
    return 0;
}
