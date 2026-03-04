#include<iostream>
using namespace std;

/*void insert(string *origin,string *last,int length)
{
    for(int i=0,j=0;i<length;i++,j++)
    {
        *(last+i)=*(origin+i);
        //last[++j]=' ';
    }
}*/

string insert(string origin)
{
    string last;

    for(int i=0;origin[i]!='\0';i++)
    {
        last+=origin[i];
        last+=' ';
    }

    return last;
}

int main(void)
{
    string name_origin,name_last;
    cin >> name_origin;

    name_last=insert(name_origin);

    cout << name_last;
    
    return 0;
}