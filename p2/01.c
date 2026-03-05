#include <stdio.h>

int main()
{
    int a[11];
    int i, j, temp;
    int newSale;

    printf("请输入10个商品的销售额：\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

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

    printf("排序后的销售额（从高到低）：\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("请输入一个商品的销售额：\n");
    scanf("%d", &newSale);

    for (i = 0; i < 10; i++)
    {
        if (newSale >= a[i])
        {
            for (j = 10; j > i; j--)
            {
                a[j] = a[j - 1];
            }
            a[i] = newSale;
            break;
        }
    }
    if (i == 10)
    {
        a[10] = newSale;
    }

    printf("插入后的销售额（从高到低）：\n");
    for (i = 0; i < 11; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
