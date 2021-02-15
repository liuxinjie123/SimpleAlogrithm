/**
 * ��ӡ�����еġ�ˮ�ɻ�����
 * ��ν��ˮ�ɻ�������ָһ����λ�������λ���������͵��ڸ�������
 *
 * ���磺153��һ����ˮ�ɻ���������Ϊ153=1�����η���5�����η���3�����η���
 */
#include <iostream>
using namespace std;

/**
 * ����Ƿ���ˮ�ɻ���
 */
int checkIFSXHS(int n) {
    if (n < 100 || n > 999) { return 0; }
    int hundred = n / 100;
    int ten = (n % 100) / 10;
    int one = n % 10;

    if (n == hundred * hundred * hundred + ten * ten * ten + one * one * one) {
        return 1;
    }
    return 0;
}

int main() {
    cout<<" c++"<<endl;
    for (int i=100; i<1000; i++) {
        if (1 == checkIFSXHS(i)) {
            cout<<" "<<i;
        }
    }
    cout<<endl<<endl;
    return 0;
}
