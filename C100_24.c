/**
 * 一个5位数，判断它是不是回文数。
 *
 * 即12321是回文数，个位与万位相同，十位与千位相同。
 */
#include <stdio.h>

void checkIfHWS(int n) {
    int tenthousand = n / 10000;
    int thousand = (n % 10000) / 1000;
    int ten = (n % 100) / 10;
    int one = n % 10;

    if (one == tenthousand && ten == thousand) {
        printf(" yes");
        return;
    }
    printf(" no");
}

int main() {
    int n;
    printf(" please input a num n (10000 <= n <= 99999): ");
    scanf("%d", &n);
    if (n < 10000 || n > 99999) {
        printf(" n must be between 10000 and 99999.\n\n");
        return 1;
    }
    checkIfHWS(n);
    printf("\n\n");
    return 0;
}
