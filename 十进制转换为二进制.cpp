// 十进制转换为二进制.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	int n, a[32];
	int i = 0;
	printf("请输入十进制数n：");
	scanf_s("%d", &n);
	while (n>0)
	{
		a[i] = n % 2;
		i = i + 1;
		n = n / 2;
	}
	for (i--; i >= 0; i--)
		printf("%d", a[i]);
	printf("\n");
	return 0;
}

