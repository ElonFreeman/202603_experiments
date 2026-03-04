#include<iostream>
using namespace std;

string reverse(string str)
{
    string str_last="";
    str_last.resize(str.length());
    for(unsigned int i=0,j=str_last.length()-1;i<str.length();i++,j--)
    {
        str_last[j]=str[i];
    }

    return str_last;
}

int main(void)
{
    string str="program",str_last;
    cin >> str;
    str_last=reverse(str);

    for(unsigned int i=0;i<=str_last.length();i++)
        cout << str_last[i];

    return 0;
}