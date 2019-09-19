#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<Windows.h>


void OddEven(unsigned num)
{
	int i = 0, j = 0;
	int ret;
	printf("奇数位为：");
	for (i = 31; i >= 1; i -= 2)
	{
		ret = 0;
		ret = (num >> i) & 1;
		printf("%d", ret);
	}
	printf("\n");

	printf("偶数位为：");
	for (i = 30; i >= 0; i -= 2)
	{
		ret = 0;
		ret = (num >> i) & 1;
		printf("%d", ret);
	}
	printf("\n");
}
int main()
{
	unsigned int num = 0;
	printf("请输入数字：");
	scanf("%d", &num);
	#include<stdio.h>
#include<Windows.h>


void OddEven(unsigned num)
{
	int i = 0, j = 0;
	int ret;
	printf("奇数位为：");
	for (i = 31; i >= 1; i -= 2)
	{
		ret = 0;
		ret = (num >> i) & 1;
		printf("%d", ret);
	}
	printf("\n");

	printf("偶数位为：");
	for (i = 30; i >= 0; i -= 2)
	{
		ret = 0;
		ret = (num >> i) & 1;
		printf("%d", ret);
	}
	printf("\n");
}
int main()
{
	unsigned int num = 0;
	printf("请输入数字：");
	scanf("%d", &num);
	OddEven(num);
	system("pause");
	return 0;
}
	OddEven(num);
	system("pause");
	return 0;
}