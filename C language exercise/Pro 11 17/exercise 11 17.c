#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//1.�������������Լ��
//int main()
//{
//    int m, n, temp, i;
//    printf("�����������������м��һ��:");
//    scanf("%d%d", &m, &n);
//    if (m < n)  /*�Ƚϴ�С��ʹ��m�д洢������n�д洢С��*/
//    { /*����m��n��ֵ*/
//        temp = m;
//        m = n;
//        n = temp;
//    }
//    //for (i = n; i > 0; i--)  /*���մӴ�С��˳��Ѱ��������������Ȼ��*/
//    //    if (m % i == 0 && n % i == 0)
//    //    {/*���������������Ȼ��������ѭ��*/
//    //        printf("%d �� %d ���Լ���� : %d\n", m, n, i);
//    //        break;
//    //    }
//    while (1)
//    {
//        temp = m % n;
//        if (temp != 0)
//        {
//            m = n;
//            n = temp;
//        }
//        else
//            printf("���Լ��Ϊ��%d", n);
//            break;
//    }
//    return 0;
//}

//2.��һ������ ��������
//int main()
//{
//	int m, n, p, q, r;
//	printf("������Ҫ�����4λ����m��\n");
//	scanf("%d", &m);
//
//	n = m % 10;
//	p = m / 10 % 10;
//	q = m / 100 % 10;
//	r = m / 1000 % 10;
//	m = r + q * 10 + p * 100 + n * 1000;
//	printf("����������mΪ��%d", m);
//
//	return 0;
//}

//3.�ж�����
//int main()
//{
//	int year;
//	printf("���������year��\n");
//	scanf("��������ݣ�%d", &year);
//	//������400�ı��� ���� ��4�ı���������100�ı���
//	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
//		printf("%d�������꣡", year);
//	else
//		printf("%d�겻�����꣡", year);
//
//	return 0;
//}

//4.���������е����ֵ������С�����˳�����
//int main()
//{
//	int a, b, c, temp;
//	printf("������Ҫ�Ƚϵ���a,b,c\n");
//	scanf("%d%d%d", &a, &b, &c);
//
//	if (a > b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a > c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b > c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("�Ӵ�С�����%d %d %d\n", a, b, c);
//
//	return 0;
//}

//5.��������y��m��n�գ����������y��ĵڼ���
//int main()
//{
//	int y, m, n, days;
//	int arr[12] = { 31,60,91,121,152,182,213,244,274,305,335,366 };
//	printf("�������ڣ���ʽ2000��5��6��--��2000 5 6��\n");
//	scanf("%d%d%d", &y, &m, &n);
//
//	if (y % 400 == 0 || y % 4 == 0 && y % 100 != 0)
//		days = arr[m - 2] + n;
//	else
//		days = arr[m - 2] + n - 1;
//	printf("%d��%d��%d���ǽ���ĵ�%d��", y, m, n, days);
//
//	return 0;
//}

