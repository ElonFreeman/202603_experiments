#include<iostream>
using namespace std;

void cut(string *str,unsigned int m,unsigned int n)  /*m:position,n:num of char*/
{  
    string last="";

    if(((*str).length())-m+1>n)
    {
        last.resize(n);

        for(unsigned int i=m,j=0;j<=n;i++,j++)
        {
            last[j]=(*str)[i];
        }

        cout << last << endl;
    }
    else if(((*str).length())-m+1<=n)
    {
        last.resize(((*str).length())-m+1);

        last=(*str).substr(m);

        cout << last << endl;
    }
    
}

int main(void)
{
    string str="we have the power to be stronger";
    
    cut(&str,5,4);
    cut(&str,5,30);

    return 0;
}