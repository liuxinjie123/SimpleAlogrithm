/**
 * ��s=a+aa+aaa+aaaa+aa...a��ֵ��
 * ����a��һ�����֡�
 * ����2+22+222+2222+22222(��ʱ����5�������)������������м��̿��ơ�
 */
#include <iostream>
#include <math.h>
using namespace std;

int getSum(int n, int times) {
    int sum = 0;
    for (int i=0; i<times; i++) {
        for (int j=0; j<=i; j++) {
            sum += n*pow(10, j);
        }
    }
    return sum;
}

int main() {
    cout<<" c++"<<endl;
    int n, times;
    cout<<" please input the num: ";
    cin>>n;
    cout<<" please input the times: ";
    cin>>times;
    int sum = getSum(n, times);
    cout<<" sum="<<sum<<endl<<endl;
    return 0;
}
