#include<iostream>
using namespace std;

int main(void)
{
    int a=48,b=12;
    int tma=a,tmb=b;
    if(a<b)
    {
        int tmp=a;
        a=b;
        b=tmp;
    }

    int GCD=0;
    /*GCD*/
    while(1)
    {
        if(a%b!=0)
        {
            int tmp=b;
            b=a%b,a=tmp;
        }
        else if(a%b==0)
        {
            GCD=b;
            break;
        }
    }

    /*LCD*/
    int LCM=(tma*tmb)/GCD;

    cout << GCD << ' ' << LCM << endl;

    return 0;
}