#include<iostream>
using namespace std;

void insert(string *origin,string *last)
{
    for(int i=0,j=0;i<(*origin).length();i++,j++)
    {
        last[j]=origin[i];
        last[j+1]=' ';
    }
}

int main(void)
{
    string name_origin,name_last;
    cin >> name_origin;

    insert(&name_origin,&name_last);

    cout << name_last;
    
    return 0;
}