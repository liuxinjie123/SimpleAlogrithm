/**
 * 一个整数，它加上100后是一个完全平方数，
 * 再加上168又是一个完全平方数，请问该数是多少？
 */

 #include <iostream>
 #include <math.h>
 using namespace std;

/**
 * 检查是否是完全平方数
 */
int checkPerfect(int n) {
    int x = sqrt(n + 100);
    int y = sqrt(n + 100 + 168);
    if (x * x == n + 100 && y * y == n + 100 + 168) {
        return 1;
    }
    return 0;
}

int main() {
    for (int i=1; i<100000; i++) {
        if (1 == checkPerfect(i)) {
            cout<<" "<<i;
        }
    }
}
