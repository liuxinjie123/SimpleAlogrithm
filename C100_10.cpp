/**
 * 输入两个正整数 m 和 n，
 * 求其最大公约数和最小公倍数。
 */
#include <iostream>
using namespace std;

int getZDGYS(int x, int y) {
    int z = x < y ? x : y;
    int res = 1;
    for (int i=2; i<=z; i++) {
        if (x % i == 0 && y % i == 0) {
            res = i;
        }
    }
    return res;
}

int getZXGBS(int x, int y) {
    return (x * y) / getZDGYS(x, y);
}

int main() {
    int x, y;
    cout<<" please input tow num, x,y:";
    cin>>x>>y;
    int res1 = getZDGYS(x, y);
    cout<<" res1 = "<<res1<<endl;
    int res2 = getZXGBS(x, y);
    cout<<" res2 = "<<res2<<endl;
    cout<<endl;
    return 0;
}
