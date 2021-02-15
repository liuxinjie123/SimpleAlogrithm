/**
 * �ŵ����⣺
 * ��һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ�
 * С���ӳ����������º�ÿ��������һ�����ӣ�
 * �������Ӷ���������ÿ���µ���������Ϊ���٣�
 */

#include <iostream>
using namespace std;

/**
 * ������������
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
