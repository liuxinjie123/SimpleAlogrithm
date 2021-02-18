/**
 * 对10个数进行排序
 *
 * 1.程序分析：
 *  可以利用选择法，即从后9个比较过程中，选择一个最小的与第一个元素交换，
 *  下次类推，即用第二个元素与后8个进行比较，并进行交换。
 */
#include <iostream>
using namespace std;

void selectSort(int a[], int length) {
    for (int i=0; i<length; i++) {
        int p=0;
        for (int j=i+1; j<length; j++) {
            if (a[i] > a[j] && (p == 0 || a[p] > a[j])) {
                p = j;
            }
        }
        if (p != 0) {
            int temp = a[i];
            a[i] = a[p];
            a[p] = temp;
        }
    }
}

int main() {
    int n;
    while(scanf("%d", &n) != EOF) {
        int a[n];
        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }

        for (int i=0; i<n; i++) {
            cout<<" "<<a[i];
        }

        cout<<endl<<endl;

        selectSort(a, n);


        for (int i=0; i<n; i++) {
            cout<<" "<<a[i];
        }

        cout<<endl<<endl;
        return 0;
    }
    cout<<endl<<endl;
    return 1;
}
