/**
 * ���õݹ麯�����÷�ʽ��
 * ���������5���ַ������෴˳���ӡ������
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
