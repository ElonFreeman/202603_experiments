#include<iostream>
using namespace std;

void reverse(string str)
{
    string str_last="";
    str_last.resize(str.length());
    for(int i=0,j=str_last.length();i<str.length();i++,j--)
    {
        str_last[j]=str[i];
    }

    for(int i=0;i<=str.length();i++)
        cout << str_last[i];

    //cout << str_last << endl;
}

int main(void)
{
    string str="program";
    reverse(str);

    return 0;
}