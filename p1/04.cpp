#include<iostream>
using namespace std;

int main(void)
{
    string name="zhangsan",serial="123456";
    string main="";
    main.resize(name.length()+serial.length());
    
    int i=0,j=0;
    while(name[j]!='\0')
    {
        main[i]=name[j];
        i++,j++;
    }
    j=0;
    while(serial[j]!='\0')
    {
        main[i]=serial[j];
        i++,j++;
    }

    cout << main << endl;

    return 0;
}