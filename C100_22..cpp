/**
 * ��5��������һ��
 * �ʵ�����˶����ꣿ��˵�ȵ�4���˴�2�ꡣ
 * �ʵ��ĸ�����������˵�ȵ�3���˴�2�ꡣ
 * �ʵ������ˣ���˵�ȵ�2�˴����ꡣ
 * �ʵڶ����ˣ�˵�ȵ�1���˴����ꡣ���
 * �ʵ�һ���ˣ���˵��10�ꡣ
 *
 * ���ʵ�����˶��
 */
#include <iostream>
using namespace std;

int main() {
    int age = 10;
    for (int i=1; i<5; i++) {
        age += 2;
    }
    cout<<" the fifth person is "<<age<<" year old."<<endl<<endl;
    return 0;
}
