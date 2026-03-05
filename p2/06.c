#include <stdio.h>
#include <string.h>

struct Commodity
{
    int number;
    char name[20];
    int q1;
    int q2;
    int q3;
    float average;
};

int count = 0;
struct Commodity c[10];

void input()
{
    if (count >= 10)
    {
        printf("商品数量已达上限！\n");
        return;
    }
    printf("请输入商品编号、商品名、三个季度的销售额：\n");
    scanf("%d %s %d %d %d", &c[count].number, c[count].name, &c[count].q1, &c[count].q2, &c[count].q3);
    c[count].average = (c[count].q1 + c[count].q2 + c[count].q3) / 3.0;
    count++;
    printf("录入成功！\n");
}

void display()
{
    int i;
    printf("number  name  q1   q2   q3   average\n");
    for (i = 0; i < count; i++)
    {
        printf("%02d      %-8s %-4d %-4d %-4d %.2f\n", c[i].number, c[i].name, c[i].q1, c[i].q2, c[i].q3, c[i].average);
    }
}

void search()
{
    int i, num;
    char name[20];
    int choice;
    int found = 0;

    printf("1.按编号查找\n2.按商品名查找\n请选择：\n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("请输入商品编号：\n");
        scanf("%d", &num);
        for (i = 0; i < count; i++)
        {
            if (c[i].number == num)
            {
                printf("number  name  q1   q2   q3   average\n");
                printf("%02d      %-8s %-4d %-4d %-4d %.2f\n", c[i].number, c[i].name, c[i].q1, c[i].q2, c[i].q3, c[i].average);
                found = 1;
                break;
            }
        }
    }
    else if (choice == 2)
    {
        printf("请输入商品名：\n");
        scanf("%s", name);
        for (i = 0; i < count; i++)
        {
            if (strcmp(c[i].name, name) == 0)
            {
                printf("number  name  q1   q2   q3   average\n");
                printf("%02d      %-8s %-4d %-4d %-4d %.2f\n", c[i].number, c[i].name, c[i].q1, c[i].q2, c[i].q3, c[i].average);
                found = 1;
                break;
            }
        }
    }

    if (!found)
    {
        printf("未找到该商品！\n");
    }
}

void sort()
{
    struct Commodity temp;
    int i, j;
    int choice;

    printf("1.按第一季度排序\n2.按第二季度排序\n3.按第三季度排序\n4.按总销售额排序\n请选择：\n");
    scanf("%d", &choice);

    for (i = 0; i < count - 1; i++)
    {
        for (j = 0; j < count - 1 - i; j++)
        {
            if (choice == 1)
            {
                if (c[j].q1 < c[j + 1].q1)
                {
                    temp = c[j];
                    c[j] = c[j + 1];
                    c[j + 1] = temp;
                }
            }
            else if (choice == 2)
            {
                if (c[j].q2 < c[j + 1].q2)
                {
                    temp = c[j];
                    c[j] = c[j + 1];
                    c[j + 1] = temp;
                }
            }
            else if (choice == 3)
            {
                if (c[j].q3 < c[j + 1].q3)
                {
                    temp = c[j];
                    c[j] = c[j + 1];
                    c[j + 1] = temp;
                }
            }
            else if (choice == 4)
            {
                if (c[j].average < c[j + 1].average)
                {
                    temp = c[j];
                    c[j] = c[j + 1];
                    c[j + 1] = temp;
                }
            }
        }
    }

    printf("排序结果：\n");
    display();
}

void update()
{
    int i, num;
    int found = 0;

    printf("请输入要更新的商品编号：\n");
    scanf("%d", &num);

    for (i = 0; i < count; i++)
    {
        if (c[i].number == num)
        {
            printf("请输入新的商品名、三个季度的销售额：\n");
            scanf("%s %d %d %d", c[i].name, &c[i].q1, &c[i].q2, &c[i].q3);
            c[i].average = (c[i].q1 + c[i].q2 + c[i].q3) / 3.0;
            printf("更新成功！\n");
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("未找到该商品！\n");
    }
}

void save()
{
    FILE *fp;

    fp = fopen("commodity.dat", "wb");
    if (fp == NULL)
    {
        printf("文件打开失败！\n");
        return;
    }
    fwrite(c, sizeof(struct Commodity), count, fp);
    fclose(fp);
    printf("数据已保存到commodity.dat文件中。\n");
}

void load()
{
    FILE *fp;

    fp = fopen("commodity.dat", "rb");
    if (fp == NULL)
    {
        printf("文件打开失败！\n");
        return;
    }
    count = fread(c, sizeof(struct Commodity), 10, fp);
    fclose(fp);
    printf("数据已从commodity.dat文件中读取。\n");
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n商品销售管理系统\n");
        printf("1.商品销售信息录入\n");
        printf("2.商品销售信息浏览\n");
        printf("3.查找商品\n");
        printf("4.排序显示\n");
        printf("5.更新商品信息\n");
        printf("6.保存数据到文件\n");
        printf("7.从文件读取数据\n");
        printf("0.退出\n");
        printf("请选择：\n");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                input();
                break;
            case 2:
                display();
                break;
            case 3:
                search();
                break;
            case 4:
                sort();
                break;
            case 5:
                update();
                break;
            case 6:
                save();
                break;
            case 7:
                load();
                break;
            case 0:
                printf("感谢使用！\n");
                return 0;
            default:
                printf("输入错误，请重新选择！\n");
        }
    }

    return 0;
}
