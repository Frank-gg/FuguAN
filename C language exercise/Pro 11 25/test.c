#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

//1.���õݹ���1-n�ĺ�
//int main()
//{
//	int s, n, i;
//	printf("������n��ֵ\n");
//	scanf("%d", &n);
//	i = n;
//
//	s = sum(n);
//
//	printf("1-%d�ú�Ϊ��%d", i, s);
//
//	return 0;
//}
//int sum(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n + sum(n - 1);
//}

//2.���õݹ���a^n
//int main()
//{
//	double a;
//	int n;
//	double i;
//	printf("������a��n��ֵ��\n");
//	scanf("%lf %d", &a, &n);
//	
//	i = pows(a, n);
//	printf("%lf��%d�η�Ϊ��%lf\n", a, n, i);
//
//	return 0;
//}
//double pows(double a, int n)
//{
//	if (n == 0)
//		return 1;
//	if (n == 1)
//		return a;
//	return pows(a, n / 2) * pows(a, n - n / 2);
//}

//3.�ݹ�ʵ����������abc�����a b c
//int main()
//{
//	int n;
//	printf("���������������n��");
//	scanf("%d", &n);
//
//	deal(n);
//
//	return 0;
//}
//int deal(int n)
//{
//	int i;
//	if (n != 0)
//	{
//		i = n % 10;
//		n = n / 10;
//		printf("%d ", i);
//	}
//	
//	return deal(n);
//}
//int main()
//{
//	int n;
//
//	printf("������һ��������");
//	scanf("%d", &n);
//
//	p(n);
//}
//int p(int n)
//{
//	if (n / 10 == 0)
//	{
//		printf("%d ", n);
//		return;
//	}
//	p(n / 10);
//	printf("%d ", n % 10);
//}

//4.��һ��������
//#define N 10
//
//int main()
//{
//	int a[N];
//	int n;
//
//	printf("��������������");
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("�����%d����:", i+1);
//		scanf("%d", &a[i]);
//	}
//	for (int i = 0; i < n / 2; i++)
//	{
//		int t;
//		t = a[i];
//		a[i] = a[n - 1 - i];
//		a[n - 1 - i] = t;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d", a[i]);
//	}
//
//	return 0;
//}