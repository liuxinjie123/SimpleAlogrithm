/**
 * 一球从100米高度自由落下，每次落地后反跳回原高度的一半；
 * 再落下，求它在第10次落地时，共经过多少米？
 * 第10次反弹多高？
 */
#include <stdio.h>

double calculateHigh(double meter, int times) {
    double sum = 0;
    for (int i=0; i<times; i++) {
        sum += meter * 2;
        meter = meter / 2.0;
    }
    sum -= 100;
    return sum;
}

int main() {
    int times;
    printf(" please input the times(times > 0): ");
    scanf("%d", &times);
    if (times < 1) {
        printf(" times must be larger than 0.\n\n");
        return 1;
    }
    double sum = calculateHigh(100, times);
    printf(" sum=%f\n\n", sum);
    return 0;
}
