/**
 * 打印出所有的“水仙花数”
 * 所谓“水仙花数”是指一个三位数，其各位数字立方和等于该数本身。
 *
 * 例如：153是一个“水仙花数”，因为153=1的三次方＋5的三次方＋3的三次方。
 */
 #include <stdio.h>
 #include <math.h>

 /**
  * 检查是否是水仙花数
  */
int checkIFSXHS(int n) {
    if (n < 100 || n > 999) { return 0; }
    int hundred = n / 100;
    int ten = (n % 100) / 10;
    int one = n % 10;

    if (n == hundred * hundred * hundred + ten * ten * ten + one * one * one) {
        return 1;
    }
    return 0;
}

int main() {
    printf(" c:\n");
    for(int i=100; i<1000; i++) {
        if (1 == checkIFSXHS(i)) {
            printf(" %d", i);
        }
    }
    printf("\n\n");
    return 0;
}
