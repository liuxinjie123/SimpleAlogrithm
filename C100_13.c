/**
 * һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ����������
 * ����6=1��2��3.����ҳ�1000���ڵ�����������
 */
#include <stdio.h>

void printPerfectNum(int n) {
    int sum = 0;
    for (int i=1; i<=n/2; i++) {
        if (n % i == 0) {
            sum += i;
        }
        if (i == n/2 && sum == n ) {
            printf("%d ", n);
            break;
        }
    }
}

int main() {
    for (int i=1; i<=1000; i++) {
        printPerfectNum(i);
    }
    return 0;
}
