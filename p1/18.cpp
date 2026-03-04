#include<iostream>
//#include <cstring>
#include<algorithm>
using namespace std;
#include <string>

void selectionSort(string *strs, int volume)
{
    for (int i = 0; i < volume - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < volume; j++) {
            if (strs[j] < strs[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(strs[i], strs[minIndex]);
        }
    }
}

int main(void)
{
    string strs[10] = {};
    
    cout << "请输入10个字符串：" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> strs[i];
    }
    
    selectionSort(strs, 10);
    
    cout << "\n排序后的结果：" << endl;
    for (int i = 0; i < 10; i++) {
        cout << strs[i] << endl;
    }

    return 0;
}
/*void sort(string *strs,int volume)
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
}*/