/**
 * 有n个整数，使其前面各数顺序向后移m个位置，最后m个数变成最前面的m个数
 */
 #include <iostream>
 using namespace std;

 void changeArray(int a[], int length, int n) {
    for (int i=0; i<n; i++) {
        int temp = a[length-1];
        for (int j=length-1; j>=0; j--) {
            a[j] = a[j-1];
        }
        a[0] = temp;
    }
 }
 int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
    int length = sizeof(a) / sizeof(a[0]);
    printf(" before:");
    for (int i=0; i<length; i++) {
        printf(" %d", a[i]);
    }
    printf("\n\n");

    changeArray(a, length, 5);

    printf(" after:");
    for (int i=0; i<length; i++) {
        printf(" %d", a[i]);
    }
    printf("\n\n");
    return 0;
 }
