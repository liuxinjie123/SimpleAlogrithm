/**
 * 利用递归函数调用方式，
 * 将所输入的5个字符，以相反顺序打印出来。
 */
#include <stdio.h>

void printReverse(int n) {
    char c;
    if (n > 0) {
        c = getchar();
        printReverse(n-1);
    } else {
        return;
    }
    printf("%c", c);
}

int main() {
    printf(" please input 5 characters: ");
    printReverse(5);
    printf("\n\n");
    return 0;
}
