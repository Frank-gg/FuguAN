#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//1. ����a��n�η�
//double power(double a, int n);
//
//int main()
//{
//	double x;
//	int n;
//	scanf("%lf %d", &x, &n);
//	printf("%.2f\n", power(x, n));
//
//	return 0;
//}
//
//double power(double a, int n)
//{
//	if (n == 0)
//		return 1;
//	if (n == 1)
//		return a;
//	return power(a, n / 2) * power(a, n - n / 2);
//}

////2.����һ��������������������
//#define N 10
//
//int main()
//{
//	int a[N];
//	int n;
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//
//	//for (int i = n - 1; i >= 0; i--)
//	//{
//	//	printf("%d ", a[i]);
//	//}
//
//	for (int i = 0; i < n / 2; i++)
//	{
//		int t;
//		t = a[i];
//		a[i] = a[n - 1 - i];
//		a[n - 1 - i] = t;
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//
//	return 0;
//}

//3. ��ƽ������
int Input(int arr[]);                  		//��������arr��Ԫ�أ�����Ԫ�ظ��� 
double GetAverage(int arr[], int size);   	//����������size��Ԫ�ص�ƽ��ֵ 
int Count(int arr[], int size, double ave);  	//����������size��Ԫ���д���ave��Ԫ�ظ��� 
const int N = 10;

int main(void)
{
    int age[N], n, k;     					//�ֱ�洢���䡢ʵ��ѧ�������Լ�����ƽ�������ѧ����
    double ave;                				//���ѧ����ƽ������	

    n = Input(age);              				//����ѧ�����䣬����ѧ����n
    ave = GetAverage(age, n);    			//��n��ѧ��ƽ������
    k = Count(age, n, ave);        				//�����ƽ�������ѧ����
    printf("ƽ��������:%.1f\n����ƽ�������ѧ������:%d\n", ave, k);

    return 0;
}
int Input(int arr[])
{
    int n = 0, a;               				//�洢ѧ��������ѧ��������

    while (1)
    {
        scanf("%d", &a);
        if (a <= 0) break;   				//���䲻�Ϸ����������� 
        arr[n++] = a;     					//��a��ֵ���±�Ϊn��Ԫ�أ�ͬʱѧ������1
    }

    return n;
}
double GetAverage(int arr[], int size)
{
    int  i;
    double ave, sum = 0;

    for (i = 0; i < size; ++i)
    {
        sum += arr[i];
    }
    ave = sum / size;

    return ave;
}
int Count(int arr[], int size, double ave)
{
    int k = 0, i;	            				//�洢ֵ����ave��Ԫ�ظ���
    for (i = 0; i < size; i++)
    {
        if (arr[i] > ave)     k++;      		//Ԫ��ֵ����aveʱ��k����1 
    }

    return k;                      			//����k
}
