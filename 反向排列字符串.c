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
//第一次写的reverse_string函数类型用了int，而且有两个输出 然后运行结果就多了一个数字1

//修改后
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