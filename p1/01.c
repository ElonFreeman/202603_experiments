#include<stdio.h>
#include<math.h>

int main(void)
{
    int a=0,n=0,Sn=0;
    int last=0;
    scanf("%d%d",&a,&n);

    for(int i=0;i<n;i++)
    {
        last+=a*((int)(pow(10,i)));
        Sn+=last;
    }

    printf("%d",Sn);

    return 0;
}