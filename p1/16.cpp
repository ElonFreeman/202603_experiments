#include<iostream>
#include<math.h>
using namespace std;

int main(void)
{
    int num_origin=0;
    cin >> num_origin;
    int tmp=num_origin;
    int everydigital[10]={};

    int i=0;
    while(num_origin>0)
    {
        everydigital[i]=num_origin%10;
        num_origin/=10;
        i++;
    }

    int num_last=0,j=0;
    while(i>=0)
    {
        num_last+=everydigital[j]*pow(10,i-1);
        j++;
        i--;
    }

    //cout << num_origin << ' ' << num_last << endl;

    if(tmp==num_last)
        cout << "It is back word number!" << endl;
    else
        cout << "It is not back word number!" << endl;
    
    return 0;
}