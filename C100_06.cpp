/**
 * 判断101-200之间有多少个素数，并输出所有素数
 */
#include <iostream>
using namespace std;

/**
 * 检查是否是素数
 */
int checkIfSuShu(int n) {
    if (2 == n) { return 1; }
    for (int i=2; i<n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    cout<<" c++"<<endl;
    for (int i=100; i<=200; i++) {
        if (1 == checkIfSuShu(i)) {
            cout<<" "<<i;
        }
    }
    cout<<endl<<endl;
}
