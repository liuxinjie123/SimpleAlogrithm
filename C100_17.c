/**
 * 打印出如下图案（菱形）
 *
 *    *
 *   ***
 *  *****
 * *******
 *  *****
 *   ***
 *    *
 */
#include <stdio.h>

void printDiamond(int rows) {
    int high = rows/2+1;
    for (int i=0; i<high; i++) {
        for (int j=high; j>i; j--) {
            printf(" ");
        }
        for (int k=0; k<2*i+1; k++) {
            printf("*");
        }
        printf("\n");
    }
    for (int l=0; l<high-1; l++) {
        for (int m=0; m<=l+1; m++) {
            printf(" ");
        }
        for (int n=2*(high-1)-2*l-1; n>0; n--) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    printf(" c:\n");
    int rows;
    printf(" please input the rows(rows>0): ");
    scanf("%d", &rows);
    printDiamond(rows);
    printf("\n\n");
    return 0;
}
