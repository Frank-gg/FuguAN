#include <stdio.h>
#include <string.h>

//
//int main()
//{
//	//���ֲ���
//	//һ�����������в��Ҿ����ĳ����
//	//����ҵ��˷�����������±꣬�Ҳ�������-1.
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//��������ֻ������arr��Ԫ�صĵ�ַ
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}
//int binary_search(int arr[], int k, int sz)//������arrֻ��һ��ָ��
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);//�����ں����ڲ���������
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//
//}



////�ݹ��ӡ1234
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d  ", n % 10);
//}
//
//int main()
//{
//	int num = 1234;
//	print(num);
//	return 0;
//}



//1.���ַ�������
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//2.�ݹ�ķ���
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);//���ַ�������
//	
//	//ģ��ʵ��strlen����
//	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���������׸�Ԫ�صĵ�ַ
//	printf("%d\n", len);
//	
//	return 0;
//}

//��n�Ľ׳�
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf_s("%d", &n);
//	ret = Fac1(n);//ѭ���ķ�ʽ
//	printf("%d\n", ret);
//
//	return 0;
//}
//
//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 2);
//}


//������n��쳲�������1 1 2 3 5 8 13
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf_s("%d", &n);
//	//TDD-������������
//	ret = Fib(n);
//	printf("%d", ret);
//
//	return 0;
//}
//�ݹ�ķ�ʽ
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//
//}
//ѭ���ķ�ʽ
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}

//��ŵ��������������̨�����⣨�ݹ飩