/**
 * ���õݹ麯�����÷�ʽ��
 * ���������5���ַ������෴˳���ӡ������
 */
#include <iostream>
using namespace std;

void printReverse(int n) {
    char c;
    if (n > 0) {
        c = getchar();
        printReverse(n-1);
    } else {
        return;
    }
    cout<<c;
}

int main() {
    cout<<" please input 5 characters: ";
    printReverse(5);
    cout<<endl<<endl;
    return 0;
}
