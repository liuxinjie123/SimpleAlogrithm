#include <iostream>
#include <string.h>
using namespace std;

char buf[1010];

void itoa(long num, char str[100]) {
    printf(" num: %d ", num);
	int i = 0;
	do {
		str[i] = num % 10 + '0';
		num /= 10;
		i++;
	} while (num);
	str[i] = '\0';
}

void getFeiBo(int n, char str[100]) {
    if (n < 2) {
        itoa(1, str);
    } else {
        long temp1 = 1;
        long temp2 = 1;
        long sum = 0;
        for (int i=2; i<=n; i++) {
            sum = temp1+ temp2;
            temp1 = temp2;
            temp2 = sum;
        }
        itoa(sum, str);
    }
}


int main() {
    int count = 0;
    for (int i=0; i<1000; ) {
        char str[100];
        getFeiBo(count, str);
        int str_length = strlen(str);
        for (int j=str_length-1; j>=0; j--) {
            buf[i] = str[j];
            i++;
        }
        count++;
    }

    int n;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        printf("%d", buf[i]);
    }
    printf("\n");
    return 0;
}
