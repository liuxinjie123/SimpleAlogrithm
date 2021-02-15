/**
 * 古典问题：
 * 有一对兔子，从出生后第3个月起每个月都生一对兔子，
 * 小兔子长到第三个月后每个月又生一对兔子，
 * 假如兔子都不死，问每个月的兔子总数为多少？
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
    printf(" 1，the total of rabbits: %d.\n", sum);
    sum = getRabbitNum2(month);
    printf(" 2，the total of rabbits: %d.\n", sum);
    printf("\n");
    return 0;
}
