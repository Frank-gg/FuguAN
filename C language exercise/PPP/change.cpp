#include <stdio.h>

int main()
{
	//�����������α���
	int a = 3;
	int b = 5;
	printf("����ǰ��a=%d b=%d", a, b);

	a = a + b;
	b = a - b;
	a = a - b;
	printf("������a=%d b=%d", a, b);

	return 0;
}