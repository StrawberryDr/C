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
	int n, i = 0, j = 0, a[20][20];  //iΪ�У�jΪ��
	printf("�������ӡ������ǵ�������");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		a[i][1] = 1;
		a[i][i] = 1;  //��һ�к�ÿһ�����һ��Ϊ1
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