#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//1.��ӡ�á�*����ɵĴ��ո�ֱ��������ͼ��
//int main()
//{
//    int n;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i, j;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                if (i + j >= n - 1)
//                    printf("* ");
//                else
//                    printf("  ");
//            }
//            printf("\n");
//        }
//    }
//}

//2.��ӡ�á�*����ɵĽ�����
//int main()
//{
//    int n;
//    while (scanf("%d", &n) != eof)
//    {
//        int i, j;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n - i - 1; j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j < i + 1; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//}

//3.��ӡ��*����������
//int main()
//{
//    int n;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i, j;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < i; j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j < n - i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//}

//4.��ӡ��*������ͼ��
//int main()
//{
//    int n;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i, j;
//        for (i = 0; i <= n; i++)
//        {
//            for (j = 0; j < n - i; j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j <= i; j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j < n - i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//}

//5.��ӡ��*��K��ͼ��
//int main()
//{
//    int n;
//    while (scanf("%d", &n) != EOF) {
//        int i, j;
//        for (i = 0; i < 2 * n + 1; i++) {
//            for (j = 0; j <= n; j++) {
//                if (j == 0 || i + j <= n || (i >= n && i - j >= n)) {
//                    printf("* ");
//                }
//                else {
//                    printf("  ");
//                }
//            }
//            printf("\n");
//        }
//    }
//}

//6.��ӡ��*����б��
//int main()
//{
//    int a;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (int i = 0; i < a; ++i)
//        {
//            for (int k = 0; k < i; ++k)
//                printf(" ");
//            printf("*");
//            for (int k = 0; k < a - i; ++k)
//                printf(" ");
//            printf("\n");
//        }
//    }
//    return 0;
//}

//7.��ӡ��*��X
//int main()
//{
//    int n;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (int i = 0; i < n; ++i)
//        {
//            for (int j = 0; j < n; ++j)
//            {
//                if (i == j || j == n - i - 1)
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//8.��ӡ����������
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        int i, j;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (j == 0 || i == j || i == n - 1)
                    printf("* ");
                else
                    printf("  ");
            }
            printf("\n");
        }
    }
    return 0;
}