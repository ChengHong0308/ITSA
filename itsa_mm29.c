#include <stdio.h>

int main()
{
    int x,foundPrime=0;
    while(scanf("%d",&x)!=EOF)
    {
        for(int i=x-1;i>0;i--)//從小於x的數字開始往下找最大的質數
        {
            foundPrime=1;
            for(int j=2;j<i;j++)
            {
                if(i%j==0)//有數(j)能整除i,i即不是質數
                {
                    foundPrime=0;
                    break;
                }
            }
            if(foundPrime)//找到質數
            {
                printf("%d\n",i);
                break;
            }
        }
    }
}