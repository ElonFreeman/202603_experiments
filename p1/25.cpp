#include<iostream>
using namespace std;

struct scoresdata
{
    char name[20];
    int score;
};

int main(void)
{
    /*open file*/
    FILE *scores=nullptr;
    scores=fopen("scores.txt","r");
    if(scores==nullptr)
    {
        cout << "error!";
        return 1;
    }

    /*build dataset*/
    scoresdata dataset[5]={};
    for(int i=0;i<5;i++)
    {
        fscanf(scores,"%s %d",dataset[i].name,&dataset[i].score);
    }

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