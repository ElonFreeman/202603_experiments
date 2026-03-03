#include<iostream>
#include <cstring>
#include<algorithm>
using namespace std;

/*int compare(const void* a,const void* b)
{
    int ia = *(int*)a;
    int ib = *(int*)b;
    return ia - ib; 
    const char* sa = (*(string*)a).c_str();
    const char* sb = (*(string*)b).c_str();
    return strcmp(sa, sb);
}*/

void sort(string *strs,int volume)
{
    sort(strs,strs+volume);
}

int main(void)
{
    string strs[10]=
    {
        "Hello",                    // 普通字符串
        "World",                     // 普通字符串
        "12345",                     // 数字字符串
        "!@#$%",                     // 特殊字符
        "",                          // 空字符串
        "a",                         // 单字符
        "This is a longer string",   // 长字符串
        "UPPERCASE",                 // 大写
        "lowercase",                 // 小写
        "Mixed Case 123"             // 混合
    };
    
    sort(strs,sizeof(strs)/sizeof(strs[0]));

    for(int i=0;i<10;i++)
        cout << strs[i] << endl;

    return 0;
}