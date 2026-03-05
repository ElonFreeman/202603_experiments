#include <stdio.h>

void sortWithPointer(int *a, int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (*(a + j) < *(a + j + 1))
            {
                temp = *(a + j);
                *(a + j) = *(a + j + 1);
                *(a + j + 1) = temp;
            }
        }
    }
}

int main()
{
    int commodity[10];
    int *p;
    int i;

    p = commodity;

    printf("请输入10个商品的销售额：\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", p + i);
    }

    printf("输入的销售额：\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", *(p + i));
    }
    printf("\n");

    sortWithPointer(p, 10);

    printf("排序后的销售额（从高到低）：\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", *(p + i));
    }
    printf("\n");

    return 0;
}
