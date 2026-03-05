#include <stdio.h>

struct Commodity
{
    int number;
    char name[20];
    int q1;
    int q2;
    int q3;
    float average;
};

int main()
{
    struct Commodity c[10];
    struct Commodity temp;
    int i, j;
    int maxQ1, maxQ2, maxQ3;
    int maxAvgIndex;
    float maxAvg;

    printf("请输入10个商品的编号、商品名、三个季度的销售额：\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d %s %d %d %d", &c[i].number, c[i].name, &c[i].q1, &c[i].q2, &c[i].q3);
        c[i].average = (c[i].q1 + c[i].q2 + c[i].q3) / 3.0;
    }

    maxQ1 = 0;
    maxQ2 = 0;
    maxQ3 = 0;
    for (i = 1; i < 10; i++)
    {
        if (c[i].q1 > c[maxQ1].q1)
        {
            maxQ1 = i;
        }
        if (c[i].q2 > c[maxQ2].q2)
        {
            maxQ2 = i;
        }
        if (c[i].q3 > c[maxQ3].q3)
        {
            maxQ3 = i;
        }
    }

    printf("第一季度销售额最高的商品：%d %s %d\n", c[maxQ1].number, c[maxQ1].name, c[maxQ1].q1);
    printf("第二季度销售额最高的商品：%d %s %d\n", c[maxQ2].number, c[maxQ2].name, c[maxQ2].q2);
    printf("第三季度销售额最高的商品：%d %s %d\n", c[maxQ3].number, c[maxQ3].name, c[maxQ3].q3);

    maxAvg = c[0].average;
    maxAvgIndex = 0;
    for (i = 1; i < 10; i++)
    {
        if (c[i].average > maxAvg)
        {
            maxAvg = c[i].average;
            maxAvgIndex = i;
        }
    }
    printf("平均销售额最高的商品：%d %s %.2f\n", c[maxAvgIndex].number, c[maxAvgIndex].name, c[maxAvgIndex].average);

    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9 - i; j++)
        {
            if (c[j].average < c[j + 1].average)
            {
                temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
        }
    }

    printf("number  name  the first quarter  the second quarter  the third quarter  average\n");
    for (i = 0; i < 10; i++)
    {
        printf("%02d      %-8s %-18d %-18d %-18d %.2f\n", c[i].number, c[i].name, c[i].q1, c[i].q2, c[i].q3, c[i].average);
    }

    return 0;
}
