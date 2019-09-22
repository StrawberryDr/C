#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<Windows.h>

int main() 
{
	int a, b;
	int ret = 0;
	printf("请输入两个数字：");
	scanf("%d%d",&a,&b);
	ret = b + ((a - b) >> 1);
	printf("%d\n", ret);
	system("pause");
	return 0;
}