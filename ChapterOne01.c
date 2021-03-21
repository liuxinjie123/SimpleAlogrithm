#include <stdio.h>

int getNum(int n) {
    if (n < 1) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return 2*getNum(n/2) + n;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int res = getNum(n);
    printf("res=%d\n\n", res);
    return 0;
}
