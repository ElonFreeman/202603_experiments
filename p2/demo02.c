#include <stdio.h>

void reverse(int a[], int n)
{
    int i, temp;
    for (i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
}

void sort1(int a[10])
{
    int i, j, temp;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9 - i; j++)
        {
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void sort2(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void sort3(int a[], int n, char style)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (style == 'a')
            {
                if (a[j] > a[j + 1])
                {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
            else if (style == 'd')
            {
                if (a[j] < a[j + 1])
                {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
    }
}

int main()
{
    int a[10] = {100, 200, 150, 300, 250, 180, 220, 280, 120, 190};
    int i;

    printf("请输入10个商品的销售额：\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    sort2(a, 10);

    printf("排序后的销售额（从高到低）：\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    reverse(a, 10);

    printf("反序后的销售额（从低到高）：\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    sort3(a, 10, 'd');

    printf("按降序排序后的销售额：\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    sort3(a, 10, 'a');

    printf("按升序排序后的销售额：\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
