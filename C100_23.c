/**
 * 给一个不多于5位的正整数，
 * 要求：
 *   一、求它是几位数，
 *   二、逆序打印出各位数字。
 */
 #include <stdio.h>

 void printNumReverse(int n) {
    if (0 < n && n < 10) {
        printf(" one digit number.\n");
        printf(" %d\n\n", n);
        return;
    }
    if (10 <= n && n< 100) {
        int ten = n / 10;
        int one = n % 10;
        printf(" two digit number.\n");
        printf(" %d%d\n\n", one, ten);
        return;
    }
    if (100 <= n && n < 1000) {
        int hundred = n / 100;
        int ten = (n % 100) / 10;
        int one = n % 10;
        printf(" three digit number.\n");
        printf(" %d%d%d\n\n", one, ten, hundred);
        return;
    }
    if (1000 <= n && n < 10000) {
        int thousand = n / 1000;
        int hundred = (n % 1000) / 100;
        int ten = (n % 100) / 10;
        int one = n % 10;
        printf(" four digit number.\n");
        printf(" %d%d%d%d\n\n", one, ten, hundred, thousand);
        return;
    }
    if (10000 <= n && n < 100000) {
        int tenthousand = n / 10000;
        int thousand = (n % 10000) / 1000;
        int hundred = (n % 1000) / 100;
        int ten = (n % 100) / 10;
        int one = n % 10;
        printf(" five digit number.\n");
        printf(" %d%d%d%d%d\n\n", one, ten, hundred, thousand, tenthousand);
        return;
    }
 }

 int main() {
    int n;
    printf(" please input n (0 < n < 100000): ");
    scanf("%d", &n);
    if (n <= 0 || n >= 100000) {
        printf(" 0 must be larger than 0 and smaller than 100000.\n\n");
    }
    printNumReverse(n);
    return 0;
 }
