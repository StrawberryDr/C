#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<Windows.h>

int main()
{
	int y = 0, num, x;    
	int arr[32] = { 0 };
	printf("��������Ҫת����ʮ������num��ת����Ŀ�����x��");
	scanf("%d %d", &num, &x);
	while (num != 0)
	{
		y++;
		arr[y] = num % x;
		num = num / x;
		if (arr[y] > 9)
		{
			arr[y] = 'A' + (arr[y] - 10);
		}
		else
		{
			arr[y] = arr[y] + '0';
		}
	}
	for (int i = y; i > 0; i--)
	{
		printf("%c", arr[i]);
	}
	system("pause");
	return 0;
}

