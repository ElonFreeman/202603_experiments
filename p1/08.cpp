#include<iostream>
using namespace std;

void fibonacci_sequence_generator(unsigned long long *container,unsigned long long beginner1,unsigned long long beginner2,unsigned long long nums)
{
    unsigned long long tmp=0;
    for(unsigned long long i=2;i<nums;i++)
    {
        tmp=beginner1+beginner2;
        *(container+i)=tmp;
        beginner1=beginner2;
        beginner2=tmp;
    }
}

int main(void)
{
    /*
    ==========================================================
    2-D array simulate fraction cauculation
    ==========================================================
    */
   
    unsigned long long fraction[2][20]={{1,2},{2,3}};
    fibonacci_sequence_generator(fraction[0],1,2,20);//Molecule
    fibonacci_sequence_generator(fraction[1],2,3,20);//Denominator

    unsigned long long tmp[2][1]={{1},{2}};
    for(unsigned long long i=1;i<20;i++)
    {
        tmp[1][0]=tmp[1][0]*fraction[1][i];//Denominator
        tmp[0][0]=tmp[0][0]*fraction[1][i]+tmp[1][0]*fraction[0][i];//Molecule
      //tmp[0][0] = tmp[0][0]*fraction[1][i] + fraction[0][i]*tmp[1][0]/fraction[1][i-1]
    }

    cout << tmp[0][0] << '/' << tmp[1][0];
    
    return 0;
}