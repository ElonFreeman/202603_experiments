#include<iostream>
#include<math.h>
using namespace std;

int sum_of_fators(int num)
{
    int sum=0;
    for(int i=1;i<=sqrt(num);i++)
    {
        if(num%i!=0)
        {
            sum+=i;
        }
    }

    return sum;
}

int main()
{
    int nums[1000]={};
    for(int i=0;i<1000;i++)
        nums[i]=i+1;

    int factor_sum[1000]={};
    for(int i=0;i<1000;i++)
    {
        factor_sum[i]=sum_of_fators(nums[i]);
    }

    return 0;
}