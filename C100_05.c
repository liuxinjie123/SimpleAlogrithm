/**
 * �ŵ����⣺
 * ��һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ�
 * С���ӳ����������º�ÿ��������һ�����ӣ�
 * �������Ӷ���������ÿ���µ���������Ϊ���٣�
 */
 #include <stdio.h>

 /**
  * 1,1,2,3,5,
  */
int getRabbitNum(int month) {
    if (month < 0) { return 0; }
    if (month == 1 || month == 2) {
        return 1;
    } else {
        return getRabbitNum(month-1) + getRabbitNum(month-2);
    }
}

int getRabbitNum2(int month) {
    if (month < 0) { return 0; }
    if (month == 1 || month == 2) { return 1; }
    int num1 = 1, num2 = 1;
    int sum = 0;
    for (int i=3; i<=month; i++) {
        sum = num1 + num2;
        num1 = num2;
        num2 = sum;
    }
    return sum;
}

int main() {
    int month;
    printf(" please input the month (month >= 1): ");
    scanf("%d", &month);
    if (month < 1) {
        printf(" month should be larger than 0.\n");
        return 1;
    }
    int sum = getRabbitNum(month);
    printf(" 1��the total of rabbits: %d.\n", sum);
    sum = getRabbitNum2(month);
    printf(" 2��the total of rabbits: %d.\n", sum);
    printf("\n");
    return 0;
}
