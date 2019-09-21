#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<Windows.h>

void Com(unsigned int num1, unsigned int num2)
{
	int i = 0, count = 0;
	for (i = 0; i < 32; i++)
	{
		if (((num1>>i)&1)!=((num2>>i)&1))
		{
			count++;
		}
	}
	printf("%d\n", count);
}

int main()
{
	unsigned int num1 = 0, num2 = 0;
	printf("请输入两个数字：");
	scanf("%d%d", &num1, &num2);
	Com(num1, num2);
	system("pause");
	return 0;
}