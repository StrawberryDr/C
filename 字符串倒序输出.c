#define _CRT_SECURE_NO_WARNINGS 1

//��һ���ַ����������Ϊ:"student a am i",
//���㽫��������ݸ�Ϊ"i am a student".
//Ҫ��
//����ʹ�ÿ⺯����
//ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���

#include<stdio.h>
#include<Windows.h>

void reverse(char *left, char *right)  //��ת�ַ���
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
	char *left = arr; //��Ԫ�ص�ַ
	char *right = arr + size - 1;  //ĩԪ�ص�ַ
	char *start = arr;  
	char *end = arr;
	reverse(left, right);  //�����ַ�����ת
	while (*end != '\0')
	{
		while ((*end != ' ') && (*end != '\0'))
		{
			end++;
		}
	//�ж���һ����ַ�������Ƿ�Ϊ�ո�ͽ�����־
		reverse(start, end - 1);  //end-1ָ�򵥴ʵ����һ����ĸ����ʱ����reverse����ʹ��������ĸ˳��ת ���������ȷ�ĵ���
		if (*end != '\0')
		{
			start = end + 1;
			end = start;
		}//���end�е�ַ����Ӧ��Ԫ�����ݲ��ǽ�����־ ����ѭ��
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