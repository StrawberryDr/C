#define _CRT_SECURE_NO_WARNINGS 1

//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���

#include<stdio.h>
#include<Windows.h>

int main()
{
	int A, B, C, D, ret;
	for (ret = 'A'; ret <= 'D'; ret++)
	{
		if (((ret != 'A') + (ret == 'C') + (ret == 'D') + (ret != 'D')) == 3)
		{
			printf("killer = %c\n", ret);
		}
	}
	system("pause");
	return 0;
}