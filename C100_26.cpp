/**
 * ��һ��3*3����Խ���Ԫ��֮��
 *
 * 1.�������������˫��forѭ�����������ά���飬�ٽ�a[i][i]�ۼӺ������
 */
#include <iostream>
using namespace std;

int main() {
    float a[3][3], sum = 0;
    int i, j;
    cout<<"please input rectangle elements: "<<endl;
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            scanf("%f", &a[i][j]);
        }
    }

    for (i=0; i<3; i++) {
        sum += a[i][i];
    }
    cout<<endl<<" sum="<<sum<<endl<<endl;
    return 0;
}
