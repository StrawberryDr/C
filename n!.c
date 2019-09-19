#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<Windows.h>

//µÝ¹é
//int Fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac(n - 1);
//	}
//}
//
//int main()
//{
//	int ret = 0;
//	int n = 0;
//	printf("ÇëÊäÈën£º");
//	scanf("%d", &n);
//	ret = Fac(n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}


//·ÇµÝ¹é

int Fac(int n)
{
	int ret = 1;
	for (int i = 1; i <= n; i++)
	{
		ret = ret * i;
	}
	return ret;
}

int main()
{
	int ret = 0;
	int n = 0;
	printf("ÇëÊäÈën£º");
	scanf("%d", &n);
	ret = Fac(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}