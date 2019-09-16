#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<windows.h>


int Su(int num)
{
	int i, a = 0;
	for (i = 2; i <= sqrt((double)num); i++)
	{
		a = num % i;
		if (a == 0)
		{
			return 0;
		}
	}
	
	return 1;
}
	////for (i = 2; i <= (int)sqrt(num); i++)
	//{
	//	if (num % i == 0)
	//	{
	//		return 0;
	//	}
	//}
	//return 1;
//

int main()
{
	/*int num, ret;
	printf("请输入一个数字：");
	scanf("%d", &num);*/
	int i = 0;
	for (i = 3; i < 100; i++)
	{
		if (Su(i))
		{
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}


#if 0
//
void Han(int *p)
{
	++*p;
}

int main()
{
	int num = 0;
	Han(&num);
	printf("%d\n", num);
	system("pause");
	return 0;
}


//
int Su(int num)
{
	int i, a;
	for (i = 2; i <= (int)sqrt(num); i++)
	{
		if (num % i != 0)
		{
			return 1;
		}
	}
	return 0;
}


int main()
{
	int num,ret;
	printf("请输入一个数字：");
	scanf("%d", &num);
	ret = Su(num);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
#endif
