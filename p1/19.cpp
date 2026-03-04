#include<iostream>
using namespace std;

int chrn(string *str,char find)
{
    int flag=0;
    for(unsigned int i=0;i<(*str).length();i++)
    {
        if(find==(*str)[i])
        {
            flag++;
        }
    }

    return flag;
}

int main(void)
{
    string str="asdgfsdfsasfdda";
    char find='a';
    //cin >> find;

    int times=chrn(&str,find);
    cout << times << endl;

    return 0;
}