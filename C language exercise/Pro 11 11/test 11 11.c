#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//������-��Ԫ�ص�ַ
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//
//	return 0;
//}

//����������
//int main()
//{
//	int x = 4, y = 6;
//	swap(&x, &y);
//	printf("x=%d y=%d\n", x, y);
//	
//	return 0;
//}
//
//int swap(int* p1, int* p2)
//{
//	int temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}

//�������ָ�����ȵ��ַ���
//int main()
//{
//	int len;
//	char* buffer = NULL;
//	srand(time(0));  //�õ�ǰʱ�����趨rand�������õ�������������㷨������ֵ//srand������������ӣ�Time(0)�ǵõ���ǰʱʱ��ֵ
//	printf("����Ҫ�೤�Ĵ���");
//	scanf("%d", &len);
//
//	buffer = (char*)malloc(len + 1);
//	if (buffer == NULL)exit(1);
//
//	for (int i = 0; i < len; i++)
//	{
//		buffer[i] = rand() % 26 + 'a';
//	}
//	buffer[len] = '\0';
//
//	printf("�������%s\n", buffer);
//	free(buffer);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ", *p);
//		p = p + 1;
//	}
//
//	return 0;
//}

//���ַ�������
//int main()
//{
//	//strlen -���ַ�������
//	//�ݹ�-ģ��ʵ��strlen-�������ķ�ʽ1���ݹ�ķ�ʽ2
//
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}
//
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//��ַ-��Ԫ�صĵ�ַ
//	printf("%p\n", &arr[0]);
//	//1.&arr��&������-������������Ԫ�ص�ַ-��������ʾ��������(��������ĵ�ַ)
//	//2.sizeof(arr)-sizeof(������)-��������ʾ��������-sizeof(arr)������������Ĵ�С
//	//����ʱ�� arr��ʾ�׵�ַ
//
//	return 0;
//}

//��ָ��������ͬ�����ĸ���
int main()
{
	int n;
	int* a = NULL;
	scanf("%d", &n);
	a = (int*)malloc(n * sizeof(int));   //��̬����n�����Ϳռ�
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	int x, sum = 0;
	scanf("%d", &x);
	for (int i = 0; i < n; i++)
		if (x == a[i])
			sum++;
	printf("%d\n", sum);
	free(a);                      //�ͷ�aָ��ָ���n�����Ϳռ�

	return 0;
}