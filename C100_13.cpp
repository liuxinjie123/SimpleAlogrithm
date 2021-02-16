/**
 * 一个数如果恰好等于它的因子之和，这个数就称为“完数”。
 * 例如6=1＋2＋3.编程找出1000以内的所有完数。
 */
#include <iostream>
using namespace std;

void printPerfectNum(int n) {
    int sum = 0;
    for (int i=1; i<=n/2; i++) {
        if (n % i == 0) {
            sum += i;
        }
        if (i == n/2 && sum == n) {
            printf(" %d", n);
        }
    }
}

int main() {
    for (int i=0; i<=10000; i++) {
        printPerfectNum(i);
    }
}
