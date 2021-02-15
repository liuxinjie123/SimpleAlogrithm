/**
 * 输入两个正整数 m 和 n，
 * 求其最大公约数和最小公倍数。
 */
#include <stdio.h>

int getZDGYS(int x, int y) {
    int z = x < y ? x : y;
    int res = 1;
    for (int i=2; i<=z; i++) {
        if (x % i ==0 && y % i == 0) {
            res = i;
        }
    }
    return res;
}

int getZXGBS(int x, int y) {
    return (x * y) / getZDGYS(x, y);
}

int main() {
    int x, y;
    printf(" please input x, y: ");
    scanf("%d,%d", &x, &y);
    int res1 = getZDGYS(x, y);
    printf(" res1=%d.\n", res1);
    int res2 = getZXGBS(x, y);
    printf(" res2=%d.\n", res2);
    printf("\n");
    return 0;
}
