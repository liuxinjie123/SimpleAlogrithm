/**
 * ���������������Ƕ������ɴ��⣺
 *
 * ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��
 * 60-89��֮�����B��ʾ��
 * 60�����µ���C��ʾ��
 */
#include <stdio.h>

int main() {
    int score;
    printf(" please input the score: ");
    scanf("%d", &score);
    printf("%c", score >= 90 ? 'A': score >= 60 ? 'B':'C');
    printf("\n\n");
    return 0;
}
