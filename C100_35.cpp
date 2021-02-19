/**
 * ��n����Χ��һȦ��˳���źš�
 * �ӵ�һ���˿�ʼ��������1��3��������������3�����˳�Ȧ�ӣ�
 * ��������µ���ԭ���ڼ��ŵ���λ��
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
    while(buf[i].next != buf[i].prev) {
        if (i%3 == 0) {
            buf[buf[i].prev].next = buf[i].next;
            buf[buf[i].next].prev = buf[i].prev;
        }
        i++;
    }
    printf("%d %d %d\n\n", buf[i].value, buf[i].prev, buf[i].next);
    return 0;
}
