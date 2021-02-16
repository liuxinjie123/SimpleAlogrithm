/**
 * ���ӳ������⣺
 *
 * ���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬����񫣬�ֶ����һ����
 * �ڶ��������ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ����һ����
 * �Ժ�ÿ�����϶�����ǰһ��ʣ�µ�һ����һ����
 * ����10���������ٳ�ʱ����ֻʣ��һ�������ˡ�
 *
 * ���һ�칲ժ�˶��١�
 */
#include <stdio.h>

int calculatePeach(int day) {
    int sum = 1;
    for (int i=0; i<day-1; i++) {
        sum += 1;
        sum *= 2;
    }
    return sum;
}

int main() {
    int day;
    printf(" please input the day:");
    scanf("%d", &day);
    if (day < 0) {
        printf(" the day must be larger than 0.\n\n");
        return 1;
    }
    int sum = calculatePeach(day);
    printf(" sum=%d\n\n", sum);
    return 0;
}
