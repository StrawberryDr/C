#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<Windows.h>


//int  reverse_string(char *string)
//{
//	if (*(++string) != '\0')  
//	{
//		reverse_string(string);
//	}
//	printf("%c", *(string - 1));
//}
//
//int main()
//{
//	char *p1 = "abcdef";
//	char *p2 = reverse_string(p1);
//	printf("%d\n", p2);
//	system("pause");
//	return 0;
//}
//��һ��д��reverse_string������������int��������������� Ȼ�����н���Ͷ���һ������1

//�޸ĺ�
void  reverse_string(char *string)
{
	if (*(++string) != '\0') 
	{
		reverse_string(string);
	}
	printf("%c", *(string - 1));
}

int main()
{
	char *p1 = "abcdef";
	reverse_string(p1);
	system("pause");
	return 0;
}