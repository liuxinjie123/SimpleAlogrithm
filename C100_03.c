/**
 * 输入三个整数x,y,z，请把这三个数由小到大输出。
 */
#include <stdio.h>

void sort(int arr[], int length) {
    int i;
    int j;
    for (i=0; i<length; i++) {
        for (j=i+1; j<length; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (i=0; i<length; i++) {
        printf(" %d", arr[i]);
    }
    printf("\n");
}

int main() {
    int x, y, z;
    printf(" please input three nums(x, y, z):");
    scanf("%d,%d,%d", &x, &y, &z);
    printf(" x=%d, y=%d, z=%d.\n", x, y, z);
    int arr[3] = {x, y, z};
    int length = sizeof(arr)/sizeof(arr[0]);

    printf(" the size of arr: %d.\n", length);

    for (int i=0; i<length; i++) {
        printf(" %d", arr[i]);
    }

    printf("\n");
    sort(arr, length);
    return 0;
}
