#include <stdio.h>

int find(int arr[], int length, int key) {
    while (length > 0 && arr[length-1] != key) {
        length--;
    }
    return length - 1;
}

int main() {
    int arr[] = {1, 3, 0, 8, 99, 222, 66, 9, 6};
    int length = sizeof(arr)/sizeof(arr[0]);
    int key = 2;
    int place = find(arr, length, key);
    printf("place: %d\n", place);
    return 0;
}
