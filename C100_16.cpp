/**
 * ����ƹ����ӽ��б������������ˡ�
 * �׶�Ϊa,b,c���ˣ��Ҷ�Ϊx,y,z���ˡ�
 *
 * �ѳ�ǩ��������������
 * �������Ա����������������a˵������x�ȣ�c˵������x,z�ȣ�
 *
 * �������ҳ��������ֵ�������
 */
#include <iostream>
using namespace std;

void printMatchName() {
    // a �� i ����
    // b �� j ����
    // c �� k ����
    char i, j, k;
    for (i='x'; i<='z'; i++) {
        for (j='x'; j<='z'; j++) {\
            if (i != j) {
                for (k='x'; k<='z'; k++) {
                    if (i != k && j != k) {
                        if (k != 'z' && k != 'z') {
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
    cout<<endl<<endl;
    return 0;
}
