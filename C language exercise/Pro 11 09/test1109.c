//���ܹ���

#include <stdio.h>
#include "test1109.h"

int main(void)
{
	int h, y;
	scanf_s("%d %d", &h, &y);
	printf("%ld\n", f(h, y));

	return 0;
}

long long f(int h, int y);
{
	long long result = y + 1;//����ʯ����Ϊ0ʱ
	for (int i = 1; i <= h; i++)
	{
		result = 2 * result;//ֱ���Ե������Ƶ�
	}

	return result;
}