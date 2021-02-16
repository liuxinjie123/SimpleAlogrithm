/**
 * 求s=a+aa+aaa+aaaa+aa...a的值，
 * 其中a是一个数字。
 * 例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。
 */
#include <stdio.h>
#include <math.h>

int getSum(int n, int times) {
    int sum = n;
    for (int i=1; i<times; i++) {
        sum += n*pow(10, i);
    }
    return sum;
}

int main() {
    int n, times;
    printf(" please input the num: ");
    scanf("%d", &n);
    printf(" please input the times: ");
    scanf("%d", &times);
    int sum = getSum(n, times);
    printf(" sum:%d", sum);
    printf("\n\n");
    return 0;
}
