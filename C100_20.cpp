/**
 * 利用递归方法求5!
 */
#include <iostream>
using namespace std;

unsigned long getJieCheng(int n) {
    unsigned long val = 1;
    if (n <= 1) { return 1; }
    val = n * getJieCheng(n-1);
    return val;
}

int main() {
    cout<<" c++"<<endl;
    int n;
    cout<<" please input n(n>0): ";
    cin>>n;
    unsigned val = getJieCheng(n);
    cout<<" val = "<<val<<endl<<endl;
    return 0;
}
