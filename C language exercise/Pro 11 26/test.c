#define _CRT_SECURE_NO_WARNINGS 1
#define N 10

#include "test.h"

//1.��ƽ�����估����ƽ�������ѧ��
//int main()
//{
//	int age[N], n, k;  //�ֱ𴢴����䡢ѧ������������ƽ���ֵ�ѧ������
//	double ave;
//
//	n = Input(age);
//	ave = GetAverage(age, n);
//	k = Count(age, n, ave);
//	printf("ƽ�������ǣ�%.1f\n ����ƽ�������ѧ��������%d\n", ave, k);
//
//	return 0;
//}
//int Input(int arr[])
//{
//	int n = 0, a;
//
//	while (1)
//	{
//		scanf("%d", &a);
//		if (a <= 0)
//			break;
//		arr[n++] = a;
//	}
//	
//	return n;
//}
//double GetAvergae(int arr[], int size)
//{
//	int i;
//	double ave, sum = 0;
//	
//	for (i = 0; i < size; ++i)
//	{
//		sum += arr[i];
//	}
//	ave = sum / size;
//
//	return ave;
//}
//int Count(int arr[], int size, double ave)
//{
//	int k = 0, i;
//	for (i = 0; i < size; i++)
//	{
//		if (arr[i] > ave)
//			k++;
//	}
//
//	return k;
//}

//2.����n��n<=10����n����������������������λ��
//int main()
//{
//	int n, i, max1;
//	int arr[N];
//
//	printf("������������nΪ��");
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		printf("����%d��������ֵΪ��", i + 1);
//		scanf("%d", &arr[i]);
//	}
//
//	max1 = 0;
//	for (int i = 1; i < n; i++)
//	{
//		if (arr[i] > arr[max1])
//			max1 = i;
//	}
//	printf("�������Ϊ��%d��λ��Ϊ��%d\n", arr[max1], max1 + 1);
//
//	return 0;
//}

//3.�������򷨽�n���������гɷǵݼ�����
//int main()
//{
//	int a[N];
//
//	//����N��Ԫ��
//	printf("����%d��������\n", N);
//	for (int i = 0; i < N; i++)
//		scanf("%d", &a[i]);
//	SelectSort(a, N);
//
//	printf("�����Ľ��Ϊ��\n");
//	for (int i = 0; i < N; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//
//	return 0;
//}
//void SelectSort(int r[], int n)
//{
//	int i, j, mink;
//	for (i = 0; i < n - 1; i++)
//	{
//		mink = i;
//		for (j = i + 1; j < n; j++)
//		{
//			if (r[mink] > r[j])
//				mink = j;
//		}
//		if (mink != i)
//		{
//			int t;
//			t = r[i];
//			r[i] = r[mink];
//			r[mink] = t;
//		}
//	}
//}

//4.����ɼ� ��10��ѧ���в����Ƿ�����ͬ��ֵ
//int main()
//{
//	int cScore[N], x, t;
//
//	printf("��������cScore��%d��Ԫ�أ�\n", N);
//	Input(cScore, N);
//	printf("������Ҫ���ҵ�����x��");
//	scanf("%d", &x);
//	t = Search(cScore, N, x);
//	if (t != -1)
//		printf("����%d�ɹ����������Ϊ%d\n", x, t);
//	else
//		printf("����%dʧ��");
//
//	return 0;
//}
//void Input(int a[], int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//}
//int Search(int a[], int n, int x)
//{
//	int i;
//	i = 0;
//	while (i < n)
//	{
//		if (a[i] == x)
//			break;
//		i++;
//	}
//	if (i < n)
//		return i + 1;
//	return -1;
//}