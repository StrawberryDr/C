// Fibonacci数列.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

int main() 
{
	int n, i, F3;
	int F1 = 1, F2 = 1;
	scanf_s("%d", &n);
	for (i = 3; i <= n; i++)
	{
		F3 = (F1 + F2) % 10007;
		F1 = F2;
		F2 = F3;
	}
	printf("%d\n", F3);
	return 0;
}