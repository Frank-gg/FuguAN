#define _CRT_SECURE_NO_WARNINGS 1
#define CN 3
#define SN 10

#include <stdio.h>
#include <string.h>


//1.����༶ĳ�γ̵ĳɼ�����
//int main()
//{
//	int cs[CN + 1][SN + 1];//���CN���༶ѧ���ĳɼ�
//	double sum[CN + 1] = { 0 }, ave[CN + 1];  //��Ÿ���ѧ���ܷ֡�ƽ����
//
//	printf("����%d���༶%d��ѧ���ĳɼ���\n", CN, SN);
//	for (int i = 1; i <= CN; i++)
//	{
//		for (int j = 1; j <= SN; j++)
//		{
//			scanf("%d", &cs[i][j]);
//			sum[i] += cs[i][j];
//		}
//	}
//
//	int max[CN + 1], maxk[CN + 1];
//	for (int i = 1; i <= CN; i++)
//	{//����༶��ƽ���֣������һ���ɼ�Ϊ��߷�
//		max[i] = cs[i][1];
//		maxk[i] = 1;
//		ave[i] = sum[i] / SN;
//	}
//	for (int i = 1; i <= CN; i++)
//	{//�ҳ����༶��߷�
//		for (int j = 2; j <= SN; j++)
//		{
//			if (cs[i][j] > max[i])
//			{
//				max[i] = cs[i][j];
//				maxk[i] = j;
//			}
//		}
//	}
//
//	int cmax, cmaxk, avemaxk;//�ֱ�������ѧ������߷֡���߷ְ�š�ƽ���ɼ���ߵİ��
//	//�������ѧ������߷ּ���߷����ڰ�ţ�ͬʱ���ƽ���ɼ���ߵİ��
//	cmax = max[1], cmaxk = 1, avemaxk = 1;
//	for (int i = 2; i <= CN; i++)
//	{
//		if (max[i] > cmax)
//		{
//			cmax = max[i];
//			cmaxk = i;
//		}
//		if (ave[i] > ave[avemaxk])
//			avemaxk = i;
//	}
//	
//	//��������༶�İ�š�ƽ���ɼ�����߷�ͬѧ����ż�����
//	printf("�༶�İ��\tƽ���ɼ�\t��߷�\t��߷����\n");
//	for (int i = 1; i <= CN; i++)
//		printf(" %4d\t\t%.2f\t\t%d\t%4d\n", i, ave[i], max[i], maxk[i]);
//	//��������༶�е���߷����ڵİ༶�����ڰ༶����ż������
//	printf("��߷�%d�� �����%d ����Ϊ%d\n", cmaxk, maxk[cmaxk], cmax);
//	//���ƽ���ɼ���ߵİ༶�İ�ż���ƽ���ɼ�
//	printf("ƽ���ɼ���ߵİ��Ϊ��%d ƽ���ɼ�Ϊ��%.2f\n", avemaxk, ave[avemaxk]);
//
//	return 0;
//}

//2.�ַ����ļ򵥼���
//int main()
//{
//	char text[80];
//	int len;
//
//	printf("����Ҫ���ܵ��ַ���:");
//	gets(text);
//	len = strlen(text);
//	for (int i = 0; i < len; i++)
//	{//���ܴ���
//		if (text[i] >= 'a' && text[i] < 'z' || text[i] >= 'A' && text[i < 'Z'])
//			text[i]++;
//		else if (text[i] == 'z')
//			text[i] = 'a';
//		else if (text[i] == 'z')
//			text[i] = 'A';
//	}
//	printf("���ܺ��ַ���Ϊ:  %s\n", text);
//
//	return 0;
//}

//3.ϵͳ��½��֤��ʵ��
int main()
{//��ȷ��id�ź�����ֱ�Ϊ����fggg������123456��
	char id[31], psw[21];  //�������id������
	int n = 3, f = 0;   //�������id������������Լ��Ƿ���ȷ���루0��ʾ����ȷ��
	do
	{
		n--;
		printf("�������id��");
		gets(id);
		printf("����������룺");
		gets(psw);
		if (strcmp(id, "fggg") == 0 && strcmp(psw, "123456") == 0)
		{
			printf("welcome!\n");
			f = 1;
			break;
		}
		else
		{
			if (n > 0)
				printf("�㻹��%d�λ�������id�����룡\n", n);
		}
	} while (n > 0);
	if (f == 0)
		printf("sorry!bye!\n");

	return 0;
}