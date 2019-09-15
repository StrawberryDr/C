#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<Windows.h>
#include<stdlib.h>

void Menu()
{
	printf("*********************");
	printf("****** 1.play  ******");
	printf("****** 0.exit  ******");
	printf("*********************");
}

int main()
{
	srand((int)time(NULL));
	int a = 0;

	do {
		Menu();
		printf("请选择：");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			play();
			break;
		case 0:
			printf("退出游戏！");
			break;
		default:
			printf("输入错误，请重新输入：");
			break;
		}
	} while (a);

}

#if 0 
//求Sn=a+aa+aaa+aaaa+aaaaa的前n项之和，其中a是一个数字， 例如：2 + 22 + 222 + 2222 + 22222
int He(int a,int n)
{

	int i;
	double sum = 0, ret = 0;
	for (i = 0; i < n; i++)
	{
		sum += a * pow(10, i);
		ret += sum;
	}
	return ret;
}
int main()
{
	int a, n, sum = 0, ret = 0;
	printf("请输入a和n的值：");
	scanf("%d%d", &a, &n);
	ret = He(a,n);
	printf("%d的前%d项和是：%d", a, n,ret);
	system("pause");
	return 0;
}



int main()
{
	int a, n, sum = 0, ret = 0, i;
	printf("请输入a和n的值：");
	scanf("%d%d", &a, &n);
	for (i = 0; i < n; i++)
	{
		sum += a * pow(10, i);
		ret += sum;
	}
	printf("%d的前%d项和是：%d", a, n, ret);
	system("pause");
	return 0;
}


//水仙花数
int Shui(int num)
{
	double sum;
	int count, i, j;
	sum = 0;
	count = 0;
	i = num;
	while (i)
	{
		count++;
		i = i / 10;
	}
	j = num;
	while (j)
	{
		sum = sum + pow((j % 10), count);
		j = j / 10;
	}
	if (sum == num)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int num;
	for (num = 0; num <= 999999; num++)
	{
		
		if (Shui(num) == 1)
		{
			printf("%d是水仙花数\n", num);
		}
	}
	system("pause");
	return 0;
}
#endif