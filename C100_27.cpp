/**
 * ��һ���Ѿ��ź�������顣
 * ������һ������Ҫ��ԭ���Ĺ��ɽ������������С�
 *
 * 1. ���������
 *    �����жϴ����Ƿ�������һ������Ȼ���ٿ��ǲ����м�����������
 *    ������Ԫ��֮����������κ���һ��λ�á�
 */
#include <iostream>
using namespace std;

void insertSort(int a[], int length, int n) {
    if (a[length - 1] < n) {
        a[length] = n;
    } else {
        for (int i=0; i<length; i++) {
            if (a[i] > n) {
                int temp = a[i];
                a[i] = n;
                for (int j=length; j>i+1; j--) {
                    a[j] = a[j-1];
                }
                a[i+1] = temp;
                break;
            }
        }
    }
}

int main() {
    int num;
    cout<<" please input a num: ";
    cin>>num;

    int a[] = {1, 5, 6, 9, 11, 13, 22, 26, 29};
    cout<<" before: "<<endl;
    for (int i=0; i<9; i++) {
        cout<<" "<<a[i];
    }
    cout<<endl<<endl;

    insertSort(a, 9, num);

    cout<<" after: "<<endl;
    for (int i=0; i<10; i++) {
        cout<<" "<<a[i];
    }
    cout<<endl<<endl;
    return 0;
}
