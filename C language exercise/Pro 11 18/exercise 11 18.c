#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//1.��while���ʵ��1-100�ú�
//int main()
//{
//	int i = 100, sum = 0;
//	while (i--)
//	{
//		sum = sum + i;
//	}
//	printf("1-100�ĺ�Ϊ��%d", sum);
//	return 0;
//}


//2.��֪�����������������ǵ����Լ������С������
//int main()
//{
//	int m, n, r, p, q;
//	printf("����������������m n\n");
//	scanf("%d%d", &m, &n);
//
//	//�Ƚ�m��n�Ĵ�С m����ϴ�ֵ
//	if (m < n)
//	{
//		q = m;
//		m = n;
//		n = q;
//	}
//	p = m;
//	q = n;
//	//�����Լ��
//	while (p % q)
//	{
//		r = p % q;
//		p = q;
//		q = r;
//	}
//	printf("%d��%d�����Լ��Ϊ��%d ��С������Ϊ��%d", m, n, q, m * n / q);
//
//	return 0;
//}

//int main()
//{
//	int m, n, r;
//	printf("����������������m n\n");
//	scanf("%d%d", &m, &n);
//
//	//�Ƚ�m��n�Ĵ�С m����ϴ�ֵ
//	if (m < n)
//	{
//		r = m;
//		m = n;
//		n = r;
//	}
//	r = n;
//	while (1)
//	{
//		if (m % r == 0 && n % r == 0)
//		{
//			printf("%d��%d���Լ��Ϊ��%d ��󹫱���Ϊ��%d", m, n, r, m * n / r);
//			break;
//		}
//		else
//			r--;
//	}
//
//	return 0;
//}

//3.����һ������ʮλ��������λ��
//int main()
//{
//	int m, n, count = 0;
//	printf("������һλλ��С��10��������");
//	scanf("%d", &m);
//	n = m;
//	while (n / 10 != 0)
//	{
//		count = count + 1;
//	}
//	printf("%d��λ��Ϊ��%d", m, count);
//
//	return 0;
//}

//4.����nֵ����1-1/2+1/3-...+(-1)^(n-1)*1/n
//int main()
//{
//	int n, i;
//	printf("������nֵ��");
//	scanf("%d", &n);
//	
//	double sum = 0.0, sign = 1.0, term;
//	for (i = 1; i <= n; i++)
//	{
//		term = sign / i;
//		sum = sum + term;
//		sign = sign * (-1);
//	}
//	printf("sum=%f\n", sum);
//
//	return 0;
//}

