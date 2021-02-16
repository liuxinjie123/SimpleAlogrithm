/**
 * һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻
 * �����£������ڵ�10�����ʱ�������������ף�
 * ��10�η�����ߣ�
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
