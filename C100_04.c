#include <stdio.h>

/**
 * Êä³ö9*9¿Ú¾÷
 */
void printMultiplicationFormula() {
    for (int i=1; i<=9; i++) {
        for (int j=1; j<=i; j++) {
            if (i*j < 10) {
                printf(" %1d * %1d = %1d  ", j, i, i*j);
            } else {
                printf(" %1d * %1d = %2d ", j, i, i*j);
            }
        }
        printf("\n");
    }
}

int main() {
    printMultiplicationFormula();
}
