#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<Windows.h>


//递归
int Fib(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return Fib(n - 1) + Fib(n - 2);
	}
}

int main()
{
	int ret = 0;
	int n = 0;
	printf("请输入你想求第几个斐波那契数：");
	scanf("%d", &n);
	ret = Fib(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}


#if 0
//非递归
int main()
{
	int a1 = 1, a2 = 1;
	int n, a3;
	printf("请输入你想求第几个斐波那契数：");
	scanf("%d", &n);
	
	for (int i = 3; i <= n; i++)
	{
		a3 = (a1 + a2);
		a1 = a2;
		a2 = a3;
	}
	printf("%d\n", a3);
	system("pause");
	return 0;
}
#endif