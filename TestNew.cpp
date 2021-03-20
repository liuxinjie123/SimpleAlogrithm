#include<stdio.h>
#include<string.h>
void itoa(int num, char str[100]) {
	int i = 0;
	do {
		str[i] = num % 10 + '0';
		num /= 10;
		i++;
	} while (num);
	str[i] = '\0';
}
int main()
{
	int num;
	char str[100];
	printf("输入一个待转字符串整数：");
	scanf("%d", &num);
	itoa(num, str);
	printf("转后的字符串为：");
	for (int i = strlen(str) -1; i >= 0; i--)
		printf("%c", str[i]);
}
