/**
 * ȡһ������a���Ҷ˿�ʼ��4��7λ��
 *
 * ��������������������ǣ�
 * (1)��ʹa����4λ��
 * (2)����һ����4λȫΪ1,����ȫΪ0����������~(~0<<4)
 * (3)��������߽���&���㡣
 */
#include <iostream>
using namespace std;

int main() {
    unsigned a, b, c, d;
    scanf("%o", &a);
    b = a>>4;
    c = ~(~0<<4);
    d = b&c;
    printf("%o\n%o\n\n", a, d);
    return 0;
}
