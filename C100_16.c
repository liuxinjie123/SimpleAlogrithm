/**
 * ����ƹ����ӽ��б������������ˡ�
 * �׶�Ϊa,b,c���ˣ��Ҷ�Ϊx,y,z���ˡ�
 *
 * �ѳ�ǩ��������������
 * �������Ա����������������a˵������x�ȣ�c˵������x,z�ȣ�
 *
 * �������ҳ��������ֵ�������
 */
#include <stdio.h>

void printMatchName() {
    // a �� i ����
    // b �� j ����
    // c �� k ����
    char i,j,k;

    for (i='x'; i<='z'; i++) {
        for (j='x'; j<='z'; j++) {
            if (i != j) {
                for (k='x'; k<='z'; k++) {
                    if (i != k && j != k) {
                        if (i != 'x' && k != 'x' && k != 'z') {
                            printf("a <-> %c\n", i);
                            printf("b <-> %c\n", j);
                            printf("c <-> %c\n", k);
                            return;
                        }
                    }
                }
            }
        }
    }

}

int main() {
    printMatchName();
    printf("\n\n");
    return 0;
}
