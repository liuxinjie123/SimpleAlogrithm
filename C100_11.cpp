/**
 * ����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����
 */
#include <iostream>
using namespace std;

int main() {
    int letters = 0, digits = 0, spaces = 0, others = 0;
    char c;
    cout<<" please input some characters: ";
    while((c = getchar()) != '\n') {
        if ((c >= 'a' && c <= 'z')|| (c >= 'A' && c <= 'Z')) {
            letters++;
        } else if (c >= '0' && c <= '9') {
            digits++;
        } else if (c == ' ') {
            spaces++;
        } else {
            others++;
        }
    }
    cout<<endl<<" all in all: character: "<<letters<<",\t digits: "<<digits<<",\t spaces: "<<spaces<<",\t others: "<<others<<".";
    cout<<endl<<endl;
    return 0;
}
