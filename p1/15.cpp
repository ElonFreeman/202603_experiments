#include<iostream>
using namespace std;

int main(void)
{
    string class_sheet[5][8]=
    {
         // Monday
        {"Chinese", "Math", "English", "Physics", "Chemistry", "Biology", "PE", "Self-study"},
        // Tuesday
        {"Math", "English", "Chinese", "Chemistry", "Physics", "History", "Geography", "Music"},
        // Wednesday
        {"English", "Chinese", "Math", "Biology", "Chemistry", "Politics", "PE", "Art"},
        // Thursday
        {"Physics", "Chemistry", "Biology", "Math", "Chinese", "English", "History", "Geography"},
        // Friday
        {"Chemistry", "Physics", "Math", "English", "Chinese", "PE", "Class Meeting", "Club Activity"}
    };

    int day=0;
    while(1)
    {
        
        cout << "Input the day which you want to know or input '8' to exit." << endl;
        cin >> day;
        if(day<1||(day>5&&day!=8)) /*input check*/
        {
            cout << "Illeagal input!" << endl;
            continue;
        }

        else
        {
            if(day==8)  /*exit*/
                break;

            for(int i=0;i<8;i++)
                cout << class_sheet[day-1][i] << ' ' << endl;
        }
        
    }
    


    return 0;
}