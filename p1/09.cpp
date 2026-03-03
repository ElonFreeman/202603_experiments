#include<iostream>
using namespace std;

long fac(int k)
{
    long factorial_k=1;
    for(int i=1;i<=k;i++)
    {
        factorial_k*=i;
    }

    return factorial_k;
}

int main(void)
{
    int k=10,factorial_k=0;
    factorial_k=fac(k);
    
    cout << factorial_k;

    return 0;
}