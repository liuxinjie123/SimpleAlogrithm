/**
 * Ñî»ÔÈý½Ç
 */
#include <iostream>
using namespace std;

void printInfo(int n) {
    int a[20][20];
    for (int i=0; i<n; i++) {
        for (int j=0; j<=i; j++) {
            if (i == 0) {
                a[i][j] = 1;
                printf("%6d", a[i][j]);
            } else if (i == 1) {
                a[i][j] = 1;
                printf("%6d", a[i][j]);
            } else {
                if (j == 0) {
                    a[i][j] = 1;
                } else if (j == i) {
                    a[i][j] = 1;
                } else {
                    a[i][j] = a[i-1][j-1] + a[i-1][j];
                }
                printf("%6d", a[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n\n");
}

int main() {
    printInfo(1);
    printInfo(3);
    printInfo(5);
    printInfo(10);
    printInfo(15);
    printInfo(20);

    return 0;
}
