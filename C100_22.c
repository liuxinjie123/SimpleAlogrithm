/**
 * 有5个人坐在一起，
 * 问第五个人多少岁？他说比第4个人大2岁。
 * 问第四个人岁数，他说比第3个人大2岁。
 * 问第三个人，又说比第2人大两岁。
 * 问第二个人，说比第1个人大两岁。最后
 * 问第一个人，他说是10岁。
 *
 * 请问第五个人多大？
 */
#include <stdio.h>

int main() {
    int age = 10;
    for (int i=1; i<5; i++) {
        age += 2;
    }
    printf(" the fifth person is : %d years old.\n\n", age);
    return 0;
}
