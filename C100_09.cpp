/**
 * 利用条件运算符的嵌套来完成此题：
 *
 * 学习成绩>=90分的同学用A表示，
 * 60-89分之间的用B表示，
 * 60分以下的用C表示。
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
