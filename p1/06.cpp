#include<iostream>
using namespace std;

void longest_word(string sentence)
{
    //string word1="",word2="",word3="",word4="";
    string words[4];

    for(int i=0,j=0;i<sentence.length();i++)  /*i:sentence,j:words*/
    {
        if(sentence[i]!=' ')
        {
            words[j]+=sentence[i];
        }
        else if(sentence[i]==' ')
        {
            j++;
        }
    }

    int tmp_len=0,tmp_ser=0;
    for(int i=0;i<4;i++)
    {
        if(tmp_len<(words[i].length()))
        {
            tmp_len=words[i].length();
            tmp_ser=i;
        }
    }
    cout << words[tmp_ser];
}

int main(void)
{
    string sentence="we are the brave";
    longest_word(sentence);

    return 0;
}
