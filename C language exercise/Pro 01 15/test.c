#define _CRT_SECURE_NO_WARNINGS 1

//1.��ӡ�����Ӧ��HTTP״̬
//#include <stdio.h>
//int main()
//{
//    int n;
//    while (scanf("%d", &n) != EOF)
//    {
//        switch (n)
//        {
//        case 200:
//            printf("OK\n");
//            break;
//        case 202:
//            printf("Accepted\n");
//            break;
//        case 400:
//            printf("Bad Request\n");
//            break;
//        case 403:
//            printf("Forbidden\n");
//            break;
//        case 404:
//            printf("Not Found\n");
//            break;
//        case 500:
//            printf("Internal Server Error\n");
//            break;
//        case 502:
//            printf("Bad Gateway\n");
//            break;
//        }
//    }
//
//    return 0;
//}


//2.��ӡ����������
//#include <stdio.h>
//int main()
//{
//    int n;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i, j;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 1; j <= i + 1; j++)
//            {
//                printf("%d ", j);
//            }
//            printf("\n");
//        }
//    }
//
//    return 0;
//}

//3.ȥ��һ����߷ֺ�һ����ͷ֣����ÿ���ƽ���ɼ�
//#include <stdio.h>
//# define len 7
//int main()
//{
//    int a[len] = { 0 };
//    int num;
//    int temp, sum = 0;//ע��sumҪ����ֵ������ͨ��
//    float avg;
//
//    for (int i = 0; i < len; i++)
//    {
//        scanf("%d", &num);
//        a[i] = num;
//
//    }
//    for (int i = 0; i < len - 1; i++)
//    {
//        for (int j = 0; j < len - i - 1; j++)
//        {
//            if (a[j] > a[j + 1])
//            {
//                temp = a[j];
//                a[j] = a[j + 1];
//                a[j + 1] = temp;
//            }
//        }
//    }
//    for (int i = 1; i < len - 1; i++)
//    {
//        sum = sum + a[i];
//    }
//    avg = sum / 5.0;
//    printf("%.2f", avg);
//
//    return 0;
//}

//4.����һ������ �����Ȼ����������
//#include <stdio.h>
//#define N 50
//
//int main(void)
//{
//    int i, j, k, t, n, a[N + 1];
//    scanf("%d", &n);
//    getchar();
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &a[i]);
//    }
//    getchar();
//    scanf("%d", &j);
//    for (i = 0; i < n; i++)
//    {
//        if (j <= a[i])
//        {
//            for (k = n - 1; k >= i; k--)
//            {
//                a[k + 1] = a[k];//��������ƶ�;
//            }
//            a[i] = j;//������ӵ���;
//            break;
//        }
//    }
//    if (i == n)//���Ҫ��ӵ�����ԭ��������Ԫ�ض���;
//    {
//        a[i] = j;//�ͷ��õ�����ĩβ;
//    }
//    for (i = 0; i < n + 1; i++)
//    {
//        printf("%d ", a[i]);
//    }
//
//    return 0;
//}

//5.ɸѡ��������
//#include <stdio.h>
//#define MAX 100
//
//int a[MAX];
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 2; i <= n; i++)
//		a[i] = i;
//	for (int i = 2; i <= n; i++)
//	{
//		for (int j = i + 1; j <= n; j++)
//		{
//			if (a[j] % i == 0)
//				a[j] = 0;
//		}
//	}
//	int ct = 0;
//	for (int i = 2; i <= n; i++)
//	{
//		if (a[i] == 0) ct++;
//		else printf("%d ", a[i]);
//	}
//	printf("\n%d\n", ct);
//	return 0;
//}

//6.ͼ�����ƶ�
//#include <stdio.h>
//
//int main()
//{
//    int twoImage[210][110], m, n;
//    float count = 0;
//    scanf("%d %d", &m, &n);
//    for (int i = 0; i < 2 * m; i++)
//        for (int j = 0; j < n; j++)
//            scanf("%d", &twoImage[i][j]);
//    for (int i = 0; i < m; i++)
//        for (int j = 0; j < n; j++)
//        {
//            if (twoImage[i][j] == twoImage[i + m][j])
//                count++;
//        }
//    printf("%.2f", 100 * count / (m * n));
//
//    return 0;
//}

//7.��¼��֤
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char ad[6] = "admin";
//    char str1[105], str2[105];
//    while (scanf("%s %s", str1, str2) != EOF)
//    {
//        int i;
//        int flag = 1;
//        for (i = 0; ad[i] != '\0'; i++)
//        {
//            if (ad[i] != str1[i] || ad[i] != str2[i])
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if (flag) printf("Login Success!\n");
//        else printf("Login Fail!\n");
//    }
//
//    return 0;
//}