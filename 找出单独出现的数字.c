#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<Windows.h>

int main()
{
	//int arr[] = {1,1,2,5,6,2,6,5,7};
	int arr[9] = { 0 };
	int i = 0;
	printf("请输入一串数字：");
	for (i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 1; i < 9; i++)
	{
		arr[0] = arr[0] ^ arr[i];//不同为1，相同为0
	}
	printf("The number is %d\n", arr[0]);
	system("pause");
	return 0;
}