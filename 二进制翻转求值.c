#define _CRT_SECURE_NO_WARNINGS 1

//��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵ��value�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
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
	printf("������һ�����֣�");
	scanf("%u", &num);
	ret=reverse_bit(num);
	printf("%u\n", ret);
	system("pause");
	return 0;
}