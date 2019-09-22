#define _CRT_SECURE_NO_WARNINGS 1

//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1

#include<stdio.h>
#include<Windows.h>

int main()
{
	int n, i = 0, j = 0, a[20][20];  //i为行，j为列
	printf("请输入打印杨辉三角的行数：");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		a[i][1] = 1;
		a[i][i] = 1;  //第一列和每一行最后一个为1
	}
	for (i = 3; i <= n; i++)
	{
		for (j = 2; j < i; j++)
		{
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
		}
		{
			for (i = 1; i <= n; i++) 
			{
				for (j = 1; j <= i; j++)
				{
					printf("%d ", a[i][j]);
				}
				printf("\n");
			}
		}
	}
	system("pause");
	return 0;
}