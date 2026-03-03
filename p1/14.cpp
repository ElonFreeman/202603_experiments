#include<iostream>
using namespace std;

struct expressinfo
{
    string pickupcode;
    string name;
    string shelfnumber;
};

int main(void)
{
    /*
    
    ==============================================
    Notice:
    Input module is baned.
    Engineering mode uses the presetted dataset.
    ==============================================

    */

    expressinfo info[30]=
    {
        {"7-2-1001", "李明", "A区03架"},
        {"3-1-2005", "王芳", "B区12架"},
        {"9-4-3012", "张伟", "C区07架"},
        {"2-3-1508", "刘洋", "A区21架"},
        {"5-2-1803", "陈静", "D区05架"},
        {"8-1-2209", "赵强", "B区18架"},
        {"1-4-0915", "孙丽", "E区02架"},
        {"4-3-3301", "周涛", "C区14架"},
        {"6-2-2706", "吴杰", "A区09架"},
        {"0-1-0402", "郑爽", "D区23架"},
        {"7-3-1920", "林峰", "B区06架"},
        {"3-4-2811", "何敏", "E区17架"},
        {"9-2-3625", "黄磊", "C区11架"},
        {"2-1-1407", "许晴", "A区30架"},
        {"5-4-2134", "沈腾", "D区08架"},
        {"8-3-1778", "姚晨", "B区25架"},
        {"1-2-0899", "杨洋", "E区13架"},
        {"4-1-3245", "李沁", "C区19架"},
        {"6-4-2563", "王凯", "A区04架"},
        {"0-3-0128", "唐嫣", "D区16架"},
        {"7-1-1087", "孙俪", "B区22架"},
        {"3-2-2994", "赵又廷", "E区10架"},
        {"9-3-3756", "白宇", "C区28架"},
        {"2-4-1632", "江疏影", "A区15架"},
        {"5-1-2043", "雷佳音", "D区20架"},
        {"8-2-1855", "马伊琍", "B区01架"},
        {"1-3-0764", "靳东", "E区26架"},
        {"4-4-3127", "刘涛", "C区29架"},
        {"6-1-2489", "张嘉译", "A区24架"},
        {"0-2-0356", "袁泉", "D区27架"}
    };

    int n=30;
    /*
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> info[i].pickupcode
        >> info[i].name
        >> info[i].shefnumber;
    }*/

    cout << "Please input your pickup-code or input 'exit' to exit." << endl;
    while(1)
    {
        int bingo=0;
        string pickupcode="7-2-1001";
        cin >> pickupcode;
        for(int i=0;i<n;i++)
        {
            if(pickupcode==info[i].pickupcode)
            {
                cout << info[i].name << info[i].shelfnumber << endl;
                bingo=1;
                break;
            }
        }
        if(!bingo&&pickupcode!="exit")
        {
            cout << "The courier for this pickup code was not found. Please check and try again.";
        }

        if(pickupcode=="exit")
        {
            break;
        }
    }
    
    return 0;
}