/**
 * 学习static定义静态变量的用法
 */
#include <iostream>
using namespace std;

void varFunc() {
    int var = 0;
    static int static_var = 0;
    printf("var=%d\n", var);
    printf("static_var=%d\n", static_var);
    printf("\n");
    var++;
    static_var++;
}

int main() {
    for (int i=0; i<3; i++) {
        varFunc();
    }
    return 0;
}
