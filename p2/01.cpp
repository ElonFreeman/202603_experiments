#include<iostream>
using namespace std;

int main(void)
{
    int price_sheet[11]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<10;i++)
    {
        cin >> price_sheet[i];
    }
    int price=0;
    cin >> price;

    /*sort*/
    for(int i=0;i<9;i++)
    {
        for(int j=0;9-i;j++)
        {
            if(price_sheet[j]<price_sheet[j+1])
            {
                swap(price_sheet[j],price_sheet[j+i]);
            }
        }
    }

    /*insert*/
    for(int i=0;i<10;i++)
    {
        int flag=0;
        if(price_sheet[i]<price)
        {
            for(int j=10;j>i;j--)
            {
                price_sheet[j]=price_sheet[j-1];
                price_sheet[i]=price;
                flag=1;
            }
        }

        if(flag==1)
        {
            
        }
    }

    return 0;
}