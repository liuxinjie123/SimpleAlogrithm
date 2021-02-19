/**
 * 有n个人围成一圈，顺序排号。
 * 从第一个人开始报数（从1到3报数），凡报到3的人退出圈子，
 * 问最后留下的是原来第几号的那位。
 */
#include <iostream>
using namespace std;

struct E {
    int value;
    int prev;
    int next;
} buf[1000];

int main() {
    int n;
    cout<<"please input the n (1 <= n <= 1000): ";
    cin>>n;
    if (n < 1 || n > 1000) {
        cout<<" n should be between 1 and 1000."<<endl<<endl;
        return 0;
    }
    for (int i=0; i<n; i++) {
        buf[i].value = i;
        if (i == 0) {
            buf[i].prev = n-1;
            buf[i].next = i+1;
        } else if (i == n-1) {
            buf[i].prev = n-2;
            buf[i].next = 0;
        } else {
            buf[i].prev = i-1;
            buf[i].next = i+1;
        }
    }

    int i=1;
    int start = 0;
    while(buf[start].next != buf[start].prev) {
        if (i%3 == 0) {
            buf[buf[start].prev].next = buf[start].next;
            buf[buf[start].next].prev = buf[start].prev;
        }
        start = buf[start].next;
        i++;
    }
    printf("%d %d %d\n\n", buf[i].value, buf[i].prev, buf[i].next);
    return 0;
}
