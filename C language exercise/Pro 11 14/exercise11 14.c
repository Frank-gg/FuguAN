#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

//struct corrd
//{
//	int x;
//	int y;
//}c1,c2;
//
//int main() 
//{
//	double distance;//�����ľ���
//
//	printf("�������һ�������꣺");
//	scanf("%d %d", &c1.x, &c1.y);
//	printf("������ڶ��������꣺");
//	scanf("%d %d", &c2.x, &c2.y);
//
//	int xdiff = c1.x - c2.x;
//	int ydiff = c1.y - c2.y;
//	distance = sqrt(xdiff * xdiff + ydiff * ydiff);
//	printf("�����ľ����ǣ�%f\n", distance);
//
//	return 0;
//}

//����ṹ������ڴ�ռ��С������ṹ��Ա����ʼ��ַ
struct Smaple
{
	short int n;
	char c[10];
	float f;
	double b;
}s;

int main()
{
	printf("����s��ռ�ֽ���Ϊ��%d���ֽ�\n", sizeof(s));
	printf("�ṹ��Ա  ��ַ\n");
	printf("   n  %X\n", &s.n);
	printf("   c  %X\n", s.c);
	printf("   f  %X\n", &s.f);
	printf("   b  %X\n", &s.b);

	return 0;
}