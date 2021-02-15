/**
 * һ��������������100����һ����ȫƽ������
 * �ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�
 */

 #include <iostream>
 #include <math.h>
 using namespace std;

/**
 * ����Ƿ�����ȫƽ����
 */
int checkPerfect(int n) {
    int x = sqrt(n + 100);
    int y = sqrt(n + 100 + 168);
    if (x * x == n + 100 && y * y == n + 100 + 168) {
        return 1;
    }
    return 0;
}

int main() {
    for (int i=1; i<100000; i++) {
        if (1 == checkPerfect(i)) {
            cout<<" "<<i;
        }
    }
}
