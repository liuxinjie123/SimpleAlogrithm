/**
 * ���ӳ������⣺
 *
 * ���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬����񫣬�ֶ����һ����
 * �ڶ��������ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ����һ����
 * �Ժ�ÿ�����϶�����ǰһ��ʣ�µ�һ����һ����
 * ����10���������ٳ�ʱ����ֻʣ��һ�������ˡ�
 *
 * ���һ�칲ժ�˶��١�
 */
#include <iostream>
using namespace std;

int calculatePeach(int day) {
    int sum = 1;
    for (int i=0; i<day-1; i++) {
        sum += 1;
        sum *= 2;
    }
    return sum;
}

int main() {
    int day;
    cout<<" please input the day(day>0): ";
    cin>>day;
    if (day < 0) {
        cout<<" day must be larger than 0."<<endl<<endl;
        return 1;
    }
    int sum = calculatePeach(day);
    cout<<" sum="<<sum<<endl<<endl;
    return 0;
}
