#include<stdio.h>

int main(void)
{
    int *pa1=NULL,*pa2=NULL;
    int *arrs[]={pa1,pa2};

    int arr1[17]={};
    int arr2[17]={};
    pa1=arr1,pa2=arr2;
    for(int i=0;i<17;i++)
    {
        *(arr1+i)=i;
    }

    while()
    {
        int j=0;
        for(int i=0;i<17;i++)
        {
            if((i+1)%3!=0)
            {
                
                *(arrs[2]+j)=*(arrs[1]+i);
                j++;
            }
        }
        *(arrs[1])={};
    }
    

    return 0;
}