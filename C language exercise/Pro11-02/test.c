#include <stdio.h>

//��������������ֵ
//int mian()
//{
//	int a = 3;
//	int b = 5;
//	//1.������ʱ����
//	//int tmp = 0;
//	//printf("%d%d", a, b);
//	//tmp = a;
//	//a = b;
//	//b = tmp;
//
//	//2.�Ӽ���-���ܻ����
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//
//	//3.���ķ���
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//��һ�������洢���ڴ��еĶ�������1�ĸ���
//����1
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf_s("%d", &num);
//	//ͳ��num�Ĳ������м���1
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//����2
int main()
{
	int num = -1;
	int i = 0;
	int count = 0;
	/*for (i = 0; i < 32; i++)
	{
		if (((num >> i) & 1) == 1)
			count++;
	}*/
	while (num)
	{
		count++;
		num = num & (num - 1);
	}
	printf("%d\n", count);
	return 0;
}