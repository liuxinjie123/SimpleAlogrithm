/**
 * 输入某年某月某日，判断这一天是这一年的第几天？
 */
#include <iostream>
using namespace std;

/**
 * 检查是否是闰年
 */
int checkIfLeap(int year) {
    if ((year % 4 == 0 && year % 100 !=0) || (year % 400 ==0)) {
        return 1;
    }
    return 0;
}

/**
 * 计算天数
 */
int calculateDay(int year, int month) {
    int sum = 0;
    if (month == 0) {
        return sum;
    }
    for (int i=1; i<=month; i++) {
        switch(i) {
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
            sum+= 28;
            break;
        default:
            break;
        }
    }
    if (1 == checkIfLeap(year)) {
        sum += 1;
    }
    return sum;
}

int main() {
    int year, month, day;
    cout<<" please input year, month, day:";
    cin>>year>>month>>day;
    int sum = calculateDay(year, month-1) + day;
    cout<<" sum day: "<<sum<<endl;
}
