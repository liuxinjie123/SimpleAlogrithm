/**
 * 输入某年某月某日，判断这一天是这一年的第几天？
 */

 #include <stdio.h>

/**
 * 检查是否是闰年
 */
int checkIfRN(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return 1;
    }
    return 0;
}

/**
 * 计算从1月1日到当前月底共多少天数
 */
int calculateDay(int year, int month) {
    if (month == 0) return 0;
    int sum = 0;
    int i;
    for (i=1; i<=month; i++) {
        switch (i) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            sum += 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            sum += 30;
            break;
        case 2:
            sum += 28;
            break;
        default:
            break;
        }
    }
    if (month >= 2 && 1 == checkIfRN(year)) {
        sum += 1;
    }
    return sum;
}


int main() {
    int year;
    int month;
    int day;
    printf(" please input the year: ");
    scanf("%d", &year);
    printf(" please input the month: ");
    scanf("%d", &month);
    printf(" please input the day: ");
    scanf("%d", &day);

    printf(" date: %d-%d-%d.\n", year, month, day);
    int sum = calculateDay(year, month-1) + day;
    printf(" Total days: %d。\n", sum);
    return 0;
}
