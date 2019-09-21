#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<Windows.h>

void Printf(int num)
{
	if (num > 9)
	{
		Printf(num / 10);
	}
	printf("%d ", num % 10);
}

int main()
{
	int num;
	printf("请输入你要打印的数字num：");
	scanf("%d", &num);
	Printf(num);
	system("pause");
	return 0;
}