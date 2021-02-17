/**
 * 有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...
 *
 * 求出这个数列的前20项之和。
 */
#include <iostream>
using namespace std;

double getValue(int n) {
    double a0 = 1, a1 = 2;
    double b0 = 1, b1 = 1;
    double a, b;
    if (n ==1) {
        return a1/b1;
    }
    for (int i=1; i<=n; i++) {
        a = a0 + a1;
        b = b0 + b1;
        a0 = a1;
        a1 = a;
        b0 = b1;
        b1 = b;
    }
    return a / b;
}

double getSum(int n) {
    double sum = 0;
    for (int i=1; i<=n; i++) {
        sum += getValue(i);
    }
    return sum;
}

int main() {
    int n;
    cout<<" please input n(n>0): ";
    cin>>n;
    if (n < 0) {
        cout<<" n must be larger than 0!"<<endl<<endl;
        return 1;
    }
    double sum = getSum(n);
    cout<<" sum = "<<sum<<endl<<endl;
    return 0;
}
