#define _CRT_SECURE_NO_WARNINGS 1

//编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值是value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832

#include<stdio.h>
#include<Windows.h>

unsigned int reverse_bit(unsigned int num)
{
	unsigned int ret = 0;
	unsigned int temp = 0;
	unsigned int i;
	for (i = 0; i < 32; i++)
	{
		ret = ret << 1; 
		temp = num & 1; 
		num = num >> 1;
		ret = temp | ret; 
	}
	return ret;
}

int main()
{
	unsigned int num, ret = 0;
	printf("请输入一个数字：");
	scanf("%u", &num);
	ret=reverse_bit(num);
	printf("%u\n", ret);
	system("pause");
	return 0;
}