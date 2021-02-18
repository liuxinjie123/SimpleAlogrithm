/**
 * 一个5位数，判断它是不是回文数。
 *
 * 即12321是回文数，个位与万位相同，十位与千位相同。
 */
#include <iostream>
using namespace std;

void checkIfHWS(int n) {
    int tenthousand = n / 10000;
    int thousand = (n % 10000) / 1000;
    int ten = (n % 100) / 10;
    int one = n % 10;
    if (one == tenthousand && ten == thousand) {
        cout<<" yes";
        return;
    }
    cout<<" no";
}

int main() {
    int n;
    cout<<" please input n (10000 <= n <= 99999): ";
    cin>>n;
    if (n < 10000 || n > 99999) {
        cout<<" n must be between 10000 and 99999."<<endl<<endl;
        return 1;
    }
    checkIfHWS(n);
    cout<<endl<<endl;
    return 0;
}
