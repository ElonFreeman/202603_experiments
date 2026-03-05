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
    FILE *fp;
    int i, j;

    printf("请输入10个商品的编号、商品名、三个季度的销售额：\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d %s %d %d %d", &c[i].number, c[i].name, &c[i].q1, &c[i].q2, &c[i].q3);
        c[i].average = (c[i].q1 + c[i].q2 + c[i].q3) / 3.0;
    }

    fp = fopen("commodity.dat", "wb");
    if (fp == NULL)
    {
        printf("文件打开失败！\n");
        return 1;
    }
    fwrite(c, sizeof(struct Commodity), 10, fp);
    fclose(fp);

    fp = fopen("commodity.dat", "rb");
    if (fp == NULL)
    {
        printf("文件打开失败！\n");
        return 1;
    }
    fread(c, sizeof(struct Commodity), 10, fp);
    fclose(fp);

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

    fp = fopen("commoditysort.dat", "wb");
    if (fp == NULL)
    {
        printf("文件打开失败！\n");
        return 1;
    }
    fwrite(c, sizeof(struct Commodity), 10, fp);
    fclose(fp);

    printf("数据已保存到commoditysort.dat文件中。\n");

    return 0;
}
