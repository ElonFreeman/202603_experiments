#include<iostream>
using namespace std;

void func(string *pa,string *pb,int m)
{
    (*pb).resize((*pa).length()-m);  /*setting space for strb*/

    *pb=(*pa).substr(m-1);

    cout << *pb << endl;
}

int main(void)
{
    string stra="asdfgghjklerty",strb="";
    int m=5;

    func(&stra,&strb,m);

    return 0;
}