/**
 * ����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����
 */
#include <stdio.h>

int main() {
    char c;
    int letters = 0, space = 0, digits = 0, others = 0;
    printf(" please input some characters: ");
    while ((c = getchar()) != '\n') {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            letters++;
        } else if (c == ' ') {
            space++;
        } else if (c >= '0' && c <= '9') {
            digits++;
        } else {
            others++;
        }
    }
    printf(" all in all, char=%d, space=%d, digits=%d, others=%d.\n\n", letters, space, digits, others);
    return 0;
}
