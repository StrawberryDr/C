#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<Windows.h>



int count_one_bits(unsigned int num)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((num>>i)&1)==1)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	unsigned int num = 0;
	int ret = 0;
	printf("����������:");
	scanf("%d", &num);
	ret = count_one_bits(num);
	printf("%d��1�ĸ����ǣ�%d\n",num, ret);
	system("pause");
	return 0;
}