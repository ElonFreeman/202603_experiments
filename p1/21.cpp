#include<iostream>
using namespace std;

/*binary*/
void binary(int decimal)
{
    int digitals[100]={};

    int i=0;
    while(decimal!=0)
    {
        digitals[i]=decimal%2;
        decimal/=2;
        i++;
    }
    i--;
    while(i>=0)
    {
        cout << digitals[i];
        i--;
    } 
}

/*octal*/
void octal(int decimal)
{
    int digitals[100]={};

    int i=0;
    while(decimal!=0)
    {
        digitals[i]=decimal%8;
        decimal/=8;
        i++;
    }
    i--;
    while(i>=0)
    {
        cout << digitals[i];
        i--;
    } 
}

int main()
{
    int decimal=0,radix=0;
    cout << "Input 2 or 8 to trans radix:" << endl;
    cin >> decimal >> radix;

    switch (radix)
    {
        case 2:binary(decimal);break;
        case 8:octal(decimal);break;
        default:cout << "Illeagall input!";break;
    }

    return 0;
}