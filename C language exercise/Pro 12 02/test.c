#define _CRT_SECURE_NO_WARNINGS 1

#include "test.h"

//1.�����������ͱ�����ֵ
//int main()
//{
//	int a, b;
//	printf("����a b��ֵ��\n");
//	scanf("%d %d", &a, &b);
//	Swap(&a, &b);
//	printf("������ a=%d b=%d��\n", a, b);
//
//	return 0;
//}
//void Swap(int* p1, int* p2)
//{
//	int temp;
//	temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}


//2.�������ָ�����ȵ��ַ���
//int main()
//{
//	int len;
//	char* buffer = NULL;
//	srand(time(0));    //�������������
//	printf("����Ҫ�೤�Ĵ���");
//	scanf("%d", &len);
//
//	buffer = (char*)malloc(len + 1);   //��̬����len+1���ֽڿռ�
//	if (buffer == NULL)exit(1);   //exit(1)����ʧ�� ��ֹ���� ����0������ϵͳ
//
//	for (int i = 0; i < len; i++)    //���������
//	{
//		buffer[i] = rand() % 26 + 'a';
//	}
//	buffer[len] = '\0';
//
//	printf("�������%s\n", buffer);
//	free(buffer);   //�ͷſռ�
//
//	return 0;
//}

//3.��ָ��������ͬ�ĸ���
//int main()
//{
//	int n;
//	int* a = NULL;
//	printf("����nΪ�೤�����ִ���\n");
//	scanf("%d", &n);
//	a = (int*)malloc(n * sizeof(int)); //����n�����Ϳռ�
//	printf("����n�����֣�ÿ������һ���󰴻س�����\n");
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	
//	int x, sum = 0;
//	printf("����Ҫ���ҵ����֣�");
//	scanf("%d", &x);
//	for (int i = 0; i < n; i++)
//		if (x == a[i])
//			sum++;
//	printf("%d\n", sum);
//	free(a);
//
//	return 0;
//}

//4.�������в���Ԫ��
//int main()
//{
//	int m = 10;
//	int a[10];
//	printf("����һ��Ԫ��Ϊ10�����飺\n");
//	for (int i = 0; i < m; i++)
//		scanf("%d", &a[i]);
//	int x;
//	printf("����Ҫ���ҵ�Ԫ�أ�");
//	scanf("%d", &x);
//	int k = search(a, 6, x);
//	if (k == -1)
//		printf("δ�ҵ���\n");
//	else
//		printf("�ҵ��ˣ��������еĵ�%d��Ԫ�أ�", k + 1);
//
//	return 0;
//}
//int search(const int* p, int n, int x)
//{
//	int pos = -1;
//	for (int i = 0; i < n; i++)
//	{
//		if (p[i] == x)
//		{
//			pos = i;
//			break;
//		}
//	}
//	return pos;
//}


//5.