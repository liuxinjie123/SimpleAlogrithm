/**
 * Çó1+2!+3!+...+20!µÄºÍ
 */
#include <iostream>
using namespace std;

unsigned long getJieCheng(int n) {
    unsigned long val = 1;
    for (int i=1; i<=n; i++) {
        val *= i;
    }
    return val;
}

unsigned long getSum(int n) {
    unsigned long sum = 0;
    for (int i=1; i<=n; i++) {
        sum += getJieCheng(i);
    }
    return sum;
}

int main() {
    int n;
    cout<<" please input n(n>0): ";
    cin>>n;
    if (n < 1) {
        cout<<" n must be larger than 0"<<endl<<endl;
        return 1;
    }
    unsigned long sum = getSum(n);
    cout<<" sum = "<<sum<<endl<<endl;
    return 0;

}
