/**
 * 对10个数进行排序
 *
 * 1.程序分析：
 *  可以利用选择法，即从后9个比较过程中，选择一个最小的与第一个元素交换，
 *  下次类推，即用第二个元素与后8个进行比较，并进行交换。
 */
#include <stdio.h>

void sort(int a[], int length) {
    for (int i=0; i<length; i++) {
        int p = 0;
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
    printf(" c:\n");
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i=0; i<n; i++) {
        printf(" %d", a[i]);
    }

    printf("\n\n");

    sort(a, n);

    for (int i=0; i<n; i++) {
        printf(" %d", a[i]);
    }

    printf("\n\n");
    return 0;
}
