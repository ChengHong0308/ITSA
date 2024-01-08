#include <stdio.h>

int main()
{
    int x;
    while(scanf("%d",&x)!=EOF)
    {
        for(int i=1;i<=x;i++)//找尋1~x的所有perfect number
        {
            int perfect=0;
            for(int j=1;j<i;j++)
            {
                if(i%j==0)//加總i的所有因數
                {
                    perfect+=j;
                }
            }
            if(perfect==i)//perfect number會剛好等於它的因數之和
            {
                if(i==6)//為符合輸出要求,6為第一個perfect number
                {
                    printf("%d",i);
                }
                else
                {
                    printf(" %d",i);
                }
            }
        }
        printf("\n");
    }
}