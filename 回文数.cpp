// 回文数.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"



int main()
{
	int i,n;
	int a, b, c, d, e, f;
	printf("请输入n:");
	scanf_s("%d", &n);
	for (i = 10000; i <= 999999; ++i)                          //全部范围
	{
		if (i <= 99999)                                        //五位数
		{
			a = i / 1 % 10;
			b = i / 10 % 10;
			d = i / 100 % 10;
			c = i / 1000 % 10;
			e = i / 10000;
			if (a == e && b == d && a + b + c + d + e == n)
			{
				printf("%d\n", i);
			}
		}
		else                                                    //六位数
		{
			a = i / 1 % 10;
			b = i / 10 % 10;
			c = i / 100 % 10;
			d = i / 1000 % 10;
			e = i / 10000 % 10;
			f = i / 100000;
			if (a == f && b == e && c == d && a + b + c + d + e + f == n)
			{
				printf("%d\n", i);
			}
		}
	}
	return 0;
}
