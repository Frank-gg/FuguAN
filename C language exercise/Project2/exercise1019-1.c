#include <stdio.h>

int main()
{
	//�������Ӵ�С����
	//int a = 0;
	//int b = 0;
	//int c = 0;
	//scanf_s("%d%d%d", &a, &b, &c);
	//if (a < b)
	//{
	//	int temp = a;
	//	a = b;
	//	b = temp;
	//}
	//if (a < c)
	//{
	//	int temp = a;
	//	a = c;
	//	c = temp;
	//}
	//if (b < c)
	//{
	//	int temp = c;
	//	c = b;
	//	b = temp;
	//}
	//printf_s("%d %d %d\n", a, b, c);

	//�ж�100��3�ı���
	/*int i = 0;
	int j = 0;
	while (i <= 100)
	{
		j = j++;
		i = j * 3;
		printf("%d\n", i);
	}*/

	//�ж�����
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i)
		{
			count++;
			printf("%d", i);
		}
	}
	printf("\nconut=%d\n", count);
	return 0;
}