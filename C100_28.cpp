/**
 * 将一个数组逆序输出。
 * 1.程序分析：用第一个与最后一个交换。
 */
#include <iostream>
using namespace std;

void reverseArray(int a[], int length) {
    for (int i=0; i<length / 2; i++) {
        int temp = a[i];
        a[i] = a[length - i - 1];
        a[length - i - 1] = temp;
    }
}

int main() {
    int a[] = {1, 6, 9, 10, 11, 16, 19, 22, 29, 33, 36};
    const int length = sizeof(a) / sizeof(a[0]);

    cout<<" before: "<<endl;
    for (int i=0; i<length; i++) {
        cout<<" "<<a[i];
    }
    cout<<endl<<endl;

    reverseArray(a, length);

    cout<<" after: "<<endl;
    for (int i=0; i<length; i++) {
        cout<<" "<<a[i];
    }
    cout<<endl<<endl;
    return 0;
}
