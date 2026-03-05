#include<iostream>
#include<math.h>
using namespace std;

int sum_of_fators(int num)
{
    int sum=0;
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }

    return sum;
}

int main()
{
    /*generate the numbers*/
    int N=1000;
    int nums[N]={};
    for(int i=0;i<N;i++)
        nums[i]=i+1;

    /*sums of factors*/
    int factor_sum[N]={};
    for(int i=0;i<N;i++)
    {
        factor_sum[i]=sum_of_fators(nums[i]);
    }

    /*filter*/
    int logs[100]={},k=0;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(factor_sum[i]==nums[j])
            {
                if(nums[i]==factor_sum[j])
                {
                    if(i!=j)
                    {
                        int flag=0;
                        for(int m=0;m<k;m++)
                        {
                            if(logs[m]==i||logs[m]==j)
                            {
                                flag=1;
                            }
                        }
                        if(flag==1)
                        {
                            continue;
                        }
                        cout << "amicable numbers:" << nums[i] << ' ' << nums[j] << endl;
                        logs[k]=i,logs[k+1]=j,k+=2;
                    }
                }
            }
        }
    }

    return 0;
}