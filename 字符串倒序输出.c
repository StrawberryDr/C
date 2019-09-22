#define _CRT_SECURE_NO_WARNINGS 1

//有一个字符数组的内容为:"student a am i",
//请你将数组的内容改为"i am a student".
//要求：
//不能使用库函数。
//只能开辟有限个空间（空间个数和字符串的长度无关）。

#include<stdio.h>
#include<Windows.h>

void reverse(char *left, char *right)  //翻转字符串
{
	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void reverse_str(char arr[], int size)
{
	char *left = arr; //首元素地址
	char *right = arr + size - 1;  //末元素地址
	char *start = arr;  
	char *end = arr;
	reverse(left, right);  //整个字符串翻转
	while (*end != '\0')
	{
		while ((*end != ' ') && (*end != '\0'))
		{
			end++;
		}
	//判断下一个地址的内容是否为空格和结束标志
		reverse(start, end - 1);  //end-1指向单词的最后一个字母，此时调用reverse函数使单词中字母顺序翻转 才能输出正确的单词
		if (*end != '\0')
		{
			start = end + 1;
			end = start;
		}//如果end中地址所对应单元的内容不是结束标志 继续循环
	}
}

int main()
{
	char arr[] = "student a am i";
	int size = sizeof(arr) / sizeof(arr[0]) - 1;
	reverse_str(arr, size);
	printf("%s\n", arr);
	system("pause");
	return 0;
}