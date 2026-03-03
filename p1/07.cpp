#include<iostream>
using namespace std;

void cut(string *str,int m,int n)  /*m:position,n:num of char*/
{  
    string last="";

    if(((*str).length())-m>=n)
    {
        last.resize(n);

        for(int i=m;i<=n;i++)
        {
            
        }

        cout << last << endl;
    }
    else if(((*str).length())-m<n)
    {
        last.resize(((*str).length())-m);

        for(int i=m;((*str)[i])!='\0';i++)
        {
            last=(*str).substr(m);
        }

        cout << last << endl;
    }
    
}

int main(void)
{
    string str="we have the power to be stronger";
    
    cut(&str,5,4);
    cut(&str,5,20);

    return 0;
}