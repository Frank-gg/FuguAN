//#include <stdio.h>
//#include <string.h>
//
//struct Book
//{
//	char name[20];
//	short price;
//};
//
//int main()
//{
//	//���ýṹ������--����һ�������͵Ľṹ�����
//	struct Book b1 = { "C���Գ������", 50 };
//	struct Book* pb = &b1;
//	//���Ľṹ�������еı���
//	strcpy(b1.name, "C++");//�ַ�������-�⺯��-string.h
//	b1.price = 15;
//	
//	printf("������%s\n", pb->name);
//	printf("�۸�%d\n", pb->price);
//	//printf("������%s\n", (*pb).name);
//	//printf("�۸�%d\n", (*pb).price);
//	//printf("������%s\n", b1.name);
//	//printf("�۸�%d\n", b1.price);
//	
//	return 0;
//}