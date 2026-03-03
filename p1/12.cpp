#include<iostream>
using namespace std;

int main(void)
{
    string idnum="101172198906042265";
    string year="",month="",day="";

    for(int i=6,cou=0;i<14;i++,cou++)
    {
        if(cou<4)
        {
            year+=idnum[i];
        }
        else if(cou>=4&&cou<6)
        {
            month+=idnum[i];
        }
        else if(cou>=6)
        {
            day+=idnum[i];
        }
    }

    cout << "Your birthday is:" << year << ' ' << month << ' ' << day;
    return 0;
}