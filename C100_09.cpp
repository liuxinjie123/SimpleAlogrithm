/**
 * ���������������Ƕ������ɴ��⣺
 *
 * ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��
 * 60-89��֮�����B��ʾ��
 * 60�����µ���C��ʾ��
 */
#include <iostream>
using namespace std;

int main() {
    int score;
    cout<<" please input the score:";
    cin>>score;
    char res = score >= 90 ? 'A' : score >= 60 ? 'B':'C';
    cout<<" res: "<<res<<endl<<endl;
    return 0;
}
