#include<iostream>
using namespace std;

int main(void)
{
    int arr_origin[10]={};
    for(int i=0;i<10;i++)
        cin >> arr_origin[i];

    int arr_last[10]={};
    for(int i=0,j=0;i<10;i++)
    {
        int flag=0;
        for(int k=0;k<j;k++)
        {
            if(arr_origin[i]==arr_last[k])
            {
                flag=1;
                break;
            }
            
        }

        if(flag)
        {
            continue;
        }

        arr_last[j]=arr_origin[i];
        j++;
    }
    
    for(int i=0;arr_last[i]!=0;i++)
    {
        cout << arr_last[i] << ' ';
    }

    return 0;
}