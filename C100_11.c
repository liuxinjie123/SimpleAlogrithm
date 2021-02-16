/**
 * 输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
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
