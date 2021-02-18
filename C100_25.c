/**
 * ��10������������
 *
 * 1.���������
 *  ��������ѡ�񷨣����Ӻ�9���ȽϹ����У�ѡ��һ����С�����һ��Ԫ�ؽ�����
 *  �´����ƣ����õڶ���Ԫ�����8�����бȽϣ������н�����
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
