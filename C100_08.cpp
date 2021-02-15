/**
 * 将一个正整数分解质因数。
 *
 * 例如：输入90,打印出90=2*3*3*5。
 */
#include <iostream>
using namespace std;

/**
 * print prime number factor
 */
void printPrimeNumberFactor(int n) {
    for (int i=1; i<=n; i++) {
        if (n <= i) {
            printf(" %d", n);
            break;
        }
        for (int j=2; j<=n; j++) {
            if (n % j == 0) {
                if (n == j) {
                    printf(" %d", j);
                } else {
                    printf(" %d * ", j);
                }
                n = n / j;
                break;
            }
        }
    }
}

int main() {
    cout<<" c++"<<endl;
    int n;
    cout<<" please input the num n(n > 0):";
    cin>>n;
    if (n < 1) {
        cout<<" n must larger than 0."<<endl<<endl;
    }
    printPrimeNumberFactor(n);
    cout<<endl<<endl;
    return 0;
}
