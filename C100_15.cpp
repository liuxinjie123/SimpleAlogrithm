/**
 * 猴子吃桃问题：
 *
 * 猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个。
 * 第二天早上又将剩下的桃子吃掉一半，又多吃了一个。
 * 以后每天早上都吃了前一天剩下的一半零一个。
 * 到第10天早上想再吃时，见只剩下一个桃子了。
 *
 * 求第一天共摘了多少。
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
