#include<iostream>
using namespace std;

double aver(double *arr,int n,double *max,double *min)
{
    /*average*/
    double sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=*(arr+i);
    }
    double average=sum/(double)n;

    /*max&min*/
    *(max)=*(min)=*(arr+0);
    for(int i=0;i<n;i++)
    {
        if(*(arr+i)>*(max))
        {
            *(max)=*(arr+i);
        }

        if(*(arr+i)<*(min))
        {
            *(min)=*(arr+i);
        }
    }

    return average;
}

int main(void)
{
    double arr[]={2,5,6,9,8,3,45,6},average=0,max=0,min=0;

    average=aver(arr,sizeof(arr)/sizeof(arr[0]),&max,&min);

    cout << "average:" << average << endl << "max:" << max << endl << "min:" << min << endl ;
    return 0;
}