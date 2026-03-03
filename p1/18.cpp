#include<iostream>
#include <cstring>
#include<algorithm>
using namespace std;



void sort(string *strs,int volume)
{
    sort(strs,strs+volume);
}

int main(void)
{
    string strs[10]={};
    for(int i=0;i<10;i++)
    {
        cin >> strs[i];
    }
    
    sort(strs,sizeof(strs)/sizeof(strs[0]));

    for(int i=0;i<10;i++)
        cout << strs[i] << endl;

    return 0;
}