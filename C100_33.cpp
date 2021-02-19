/**
 * 输入数组，
 * 最大的与第一个元素交换，最小的与最后一个元素交换，
 * 输出数组。
 */
#include <iostream>
using namespace std;


int main() {
    int a[10] = {100, 999, 22, 55, 9, 1, -3, 222, 8, 9};

    printf(" before: ");
    for (int i=0; i<10; i++) {
        printf(" %d", a[i]);
    }
    printf("\n\n");

    int max = 0, min = 0;
    for (int i=0; i<10; i++) {
        if (a[max] < a[i]) {
            max = i;
        }
        if (a[min] > a[i]) {
            min = i;
        }
    }
    int temp = a[0];
    a[0] = a[max];
    a[max] = temp;

    temp = a[9];
    a[9] = a[min];
    a[min] = temp;

    printf(" after: ");
    for (int i=0; i<10; i++) {
        printf(" %d", a[i]);
    }
    printf("\n\n");
    return 0;
}
