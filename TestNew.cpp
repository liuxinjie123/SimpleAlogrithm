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
	printf("����һ����ת�ַ���������");
	scanf("%d", &num);
	itoa(num, str);
	printf("ת����ַ���Ϊ��");
	for (int i = strlen(str) -1; i >= 0; i--)
		printf("%c", str[i]);
}
