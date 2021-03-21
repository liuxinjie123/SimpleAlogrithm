#include <stdio.h>


int getFeibo(int n) {
    int num1 = 1;
    int num2 = 1;

    if (n == 1 || n == 2) {
        return 1;
    }

    int res = 0;

    for (int i=3; i<=n; i++) {
        res = num1 + num2;
        num1 = num2;
        num2 = res;
    }
    return res;
}

int getFeibo02(int n) {
    if (n == 1 || n == 2) {
        return 1;
    } else {
        return getFeibo02(n-1) + getFeibo02(n-2);
    }
}

int main() {
    int n;
    printf("please input num n: ");
    scanf("%d", &n);
    int res = getFeibo(n);
    printf("res1=%d\n", res);
    res = getFeibo02(n);
    printf("res2=%d\n", res);
    printf("\n");
    return 0;
}
