#include <stdio.h>

//int main()
//{
//	//����һ������
//	int arr[10] = { 1,2,3 };
//	char arr2[5] = { 'a',89 };
//	char arr3[5] = "ab";
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));
//	//sizeof������ռ�ռ��С=char 7*1=7
//	printf("%d\n", strlen(arr4));
//	//strlen���ַ�������--'\0'֮ǰ���ַ�����
//	//[a b c d e f \0]
//	return 0;
//
//	//1.strlen��sizeofû��ʲô����
//	//2.strlen�����ַ������ȵ�-ֻ�ܶ��ַ����󳤶�-�⺯��-ʹ�õ���ͷ�ļ�
//	//3.sizeof ������������顢���͵Ĵ�С-��λ���ֽ�-������
//}

//int mian()
//{
//	char arr[] = "abcdef";
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < len; i++);
//	{
//		printf("%c", arr[i]);
//	}
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//
//	return 0;
//}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//��arr���������ų�����
	bubble_sort(arr, sz);//ð��������
	for (i = 0; i < sz; i++)
	{
		printf("&d", arr[i]);
	}

	return 0;
}

void bubble_sort(int arr[],int sz)
{
	//ȷ��ð�����������
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//ÿһ��ð������
		int j = 0;
		for (j = 0; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}