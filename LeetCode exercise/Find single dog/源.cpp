#include <stdio.h>
#include <limits.h>

int main()
{
	int arr[] = { 1,2,3,4,5,4,3,2,1 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//����arr����Ĵ�С

	for (i = 0; i < sz; i++)
	{
		//ͳ��arr[i]��arr�����г����˼���
		int j = 0;
		int count = 0;//������
		for (i = 0; i < sz; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count == 1)
		{
			printf("������%d\n", arr[i]);
			break;
		}
	}
	return 0;
}