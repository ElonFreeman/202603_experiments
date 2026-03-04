#include<iostream>
using namespace std;

int ackermann_func(unsigned long long m,unsigned long long n)
{
    unsigned long long function_value=0;

    if(m==0)
    {
        function_value=n+1;
    }
    else if(m>0&&n==0)
    {
        function_value=ackermann_func(m-1,1);
    }
    else if(m>0&&n>0)
    {
        function_value=ackermann_func(m-1,ackermann_func(m,n-1));
    }

    return function_value;

}

int main(void)
{
    int m=0,n=0;
    cin >> m >> n;
    unsigned long long ackermann_func_value=ackermann_func((unsigned long long)m,(unsigned long long)n);
    cout << ackermann_func_value;

    return 0;
}