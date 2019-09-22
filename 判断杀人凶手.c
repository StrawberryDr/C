#define _CRT_SECURE_NO_WARNINGS 1

//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。

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