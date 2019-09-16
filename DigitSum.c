#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<Windows.h>


int DigitSum(int num)
{
	if (num < 10)
	{
		return num;
	}
	else
	{
		return (num%10)+DigitSum(num / 10);
	}
}

int main()
{
	int ret = 0;
	int num;
	printf("请输入你要求的数字：");
	scanf("%d", &num);
	ret = DigitSum(num);
	printf("%d\n", ret);
	system("pause");
	return 0;
}