#include<iostream>
using namespace std;

struct phone_num_info
{
    string phone_num;
    string adress;
};

int main(void)
{
    phone_num_info infos[10]=
    {
        {"1380013", "北京市"},
        {"1391234", "上海市"},
        {"1378888", "广州市"},
        {"1365555", "深圳市"},
        {"1352222", "杭州市"},
        {"1347777", "成都市"},
        {"1594444", "武汉市"},
        {"1586666", "西安市"},
        {"1579999", "南京市"},
        {"1563333", "重庆市"}
    };

    string phone_number="";
    cin >> phone_number;

    string city_compare="";
    for(int i=0;i<7;i++)
    {
        city_compare+=phone_number[i];
    }

    int flag=0;
    for(int i=0;i<10;i++)
    {
        if(city_compare==infos[i].phone_num)
        {
            flag=1;
            cout << infos[i].adress << endl;
        }
    }

    if(flag==0)
    {
        cout << "unknown address" << endl;
    }

    return 0;
}