//������������Ϸ
#include "game.h"

void menu()
{
	printf("****************************\n");
	printf("******1.play    0.exit******\n");
	printf("****************************\n");
}

//��Ϸ���㷨ʵ��
void game()
{
	//����-����߳���������Ϣ
	char board[ROW][COL] = { 0 };//ȫ���ո�
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
}

void test()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}