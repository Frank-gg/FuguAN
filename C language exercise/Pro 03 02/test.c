#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>  
#include<math.h>

//1.д�������ж�������n�Ƿ�Ϊ����
//int isPrime(int n);
//
//int main()
//{
//	int i, j, k;
//	printf("������Ҫ�жϵ�����");
//	scanf("%d", &i);
//	j = isPrime(i);
//	if (j == 0)
//		printf("%dΪ����", &i);
//	else
//		printf("%d��������", &i);
//	
//	return 0;
//}
//
//int isPrime(int n)
//{
//	if (n < 2)
//		return 0;
//	for (int i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//
//	return 1;
//}

//2.�������1-n�ĺ�
int sum(int n);

int main()
{
	int n;
	scanf("%d", &n);
	printf("��Ϊ%d", sum(n));

	return 0;
}

int sum(int n)
{
	int s = 0;

	for (int i = 1; i <= n; i++)
	{
		s = s + i;
	}

	return s;
}