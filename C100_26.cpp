/**
 * 求一个3*3矩阵对角线元素之和
 *
 * 1.程序分析：利用双重for循环控制输入二维数组，再将a[i][i]累加后输出。
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
