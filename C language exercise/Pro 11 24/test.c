#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

//1.��ӡ쳲���������
//int main()
//{
//	int f1, f2, f;
//	f1 = f2 = 1;
//	printf("%5d %5d", f1, f2);
//	for (int i = 3; i <= 20; i++)
//	{
//		f = f1 + f2;
//		printf("%5d", f);
//		if (i % 5 == 0)
//			printf("\n");
//		f1 = f2;
//		f2 = f;
//	}
//
//	return 0;
//}

//2.��������m��n�ܱ�17���������ۼ�
//int main()
//{
//	int m, n, i, sum = 0;
//
//	printf("����m��n��ֵ��0<m<n<1000��:\n");
//	scanf_s("%d %d", &m, &n);
//	
//	for (i = m; i <= n; i++)
//	{
//		if (i % 17 == 0)
//		{
//			sum += i;
//		}
//	}
//	printf("%d��%d֮���ܱ�17������������Ϊ��%d", m, n, sum);
//
//	return 0;
//}

//3.���ú�������1-n�ĺ�
//int main()
//{
//	int n, s;
//	printf("������nֵ\n");
//	scanf_s("%d", &n);
//
//	s = sumN(n);
//
//	printf("1��%d�ĺ��ǣ�%d", n, s);
//	return 0;
//}
//int sumN(int n)
//{
//	int sum = 0;
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		sum += i;
//	}
//
//	return sum;
//}

//4.���ú�������ֵ
//int main()
//{
//	int x = 5, y = 10;
//	printf("����ǰx=%d��y=%d", x, y);
//	swap(&x, &y);
//	printf("������x=%d��y=%d", x, y);
//
//	return 0;
//}
//int swap(int* x, int* y)
//{
//	int temp;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}

