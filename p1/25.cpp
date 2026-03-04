#include<iostream>
using namespace std;

struct scoresdata
{
    char name[20];
    int score;
};

int main(void)
{
    /*build dataset*/
    scoresdata dataset[5]=
    {
        {"zhangsan",100},
        {"lisi",98},
        {"wangwu",78},
        {"zhaoliu",96},
        {"xueqi",88}
    };

     
    /*open file*/
    FILE *scores=nullptr;
    scores=fopen("scores.txt","w+");
    if(scores==nullptr)
    {
        cout << "error!";
        return 1;
    }
    for(int i=0;i<5;i++)
    {
        fprintf(scores,"%s %d\n",dataset[i].name,dataset[i].score);
    }
    fclose(scores);

    /*average*/
    double sum=0,average=0;
    for(int i=0;i<5;i++)
    {
        sum+=dataset[i].score;
    }
    average=sum/5.00;
    cout << average << endl;

    /*max&min*/
    int max=dataset[0].score,min=dataset[0].score;
    for(int i=0;i<5;i++)
    {
        if(dataset[i].score>max)
            max=dataset[i].score;

        if(dataset[i].score<min)
            min=dataset[i].score;
    }
    cout << max << ' ' <<  min;
    
    return 0;
}