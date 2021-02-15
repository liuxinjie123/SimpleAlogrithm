/**
 * 古典问题：
 * 有一对兔子，从出生后第3个月起每个月都生一对兔子，
 * 小兔子长到第三个月后每个月又生一对兔子，
 * 假如兔子都不死，问每个月的兔子总数为多少？
 */

#include <iostream>
using namespace std;

/**
 * 计算兔子数量
 */
int getRabbitNum(int month) {
    if (month < 1) { return 0; }
    if (1 == month || 2 == month) {
        return 1;
    } else {
        return getRabbitNum(month-1) + getRabbitNum(month-2);
    }
}

int getRabbitNum2(int month) {
    if (month < 1) { return 0; }
    if (1 == month || 2 == month) { return 1; }
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
    cout<<" please input the month(month>=1): ";
    cin>>month;
    if (month < 1) {
        cout<<" month should be larger than 0."<<endl;
        return 1;
    }
    int sum = getRabbitNum(month);
    cout<<" 1, the total num of rabbit is: "<<sum<<endl;
    sum = getRabbitNum2(month);
    cout<<" 2, the total num of rabbit is: "<<sum<<endl;
    return 0;
}
