#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//1.�ж�һ������m�Ƿ���������������,������жϽ��
//int main()
//{
//	int m, i;
//	printf("��������Ҫ�жϵ���m:\n");
//	scanf("%d", &m);
//
//	for (i = m - 1; i > 2; i--)
//	{
//		if (m % i != 0)
//		{
//			continue;
//		}
//		else
//			printf("%d��������", m);
//	}
//	printf("%d������", m);
//
//	return 0;
//}

//2.���1~100֮�������
//int main()
//{
//    int i, j;
//    for (i = 1; i <= 100; i++)
//    {
//        for (j = 2; j < i; j++)
//        {
//            if (i % j == 0)
//                break;
//        }
//        if (i == j)
//            printf("%d ", i);
//    }
//
//    return 0;
//}

//3.�������ˮ�ɻ�
//int main()
//{
//	int m, g, s, b;
//
//	for (m = 100; m < 1000; m++)
//	{
//		g = m % 10;
//		s = m / 10 % 10;
//		b = m / 100 % 10;
//		if (m == g * g * g + s * s * s + b * b * b)
//			printf("%4d", m);
//	}
//
//	return 0;
//}

//4.����Ǯ����
//int main()
//{
//	int x;
//	int ones, twos, fives;
//
//	printf("����Ǯ����\n");
//	scanf("%d", &x);
//	printf("���㷽���У�\n");
//	for (ones = 1; ones < x * 10; ones++)
//	{
//		for (twos = 1; twos < x * 10 / 2; twos++)
//		{
//			for (fives = 1; twos < x * 10 / 5; fives++)
//			{
//				if (ones + twos * 2 + fives * 5 == x * 10)
//				{
//					printf("1��%dö��2��%dö��5��%dö\n", ones, twos, fives);
//				}
//			}
//		}
//	}
//
//	return 0;
//}