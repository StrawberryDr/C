#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<Windows.h>


int Pow(int n, int k)
{
	if (k < 1)
	{
		return 1;
	}
	else
	{
		return n * Pow(n, k - 1);
	}
}

int main()
{
	int ret = 0;
	int n, k;
	printf("请输入你要求的n和k值：");
	scanf("%d%d", &n, &k);
	ret = Pow(n, k);
	printf("%d\n", ret);
	system("pause");
	return 0;
}