#include<iostream>
using namespace std;

int main(void)
{
    int a=0,b=1,c=0;
    int abc=0,cba=0;
    
    /*a+c=13,b=1*/
    for(int i=0;i<10;i++)
    {
        a=i;
        c=13-a;
        if(c>=10)
        {
            continue;
        }

        abc=c+b*10+a*100,cba=a+b*10+c*100;
        if((abc+cba)==1333)
        {
            cout << a << ' ' << c << endl;
        }
    }

    return 0;
}