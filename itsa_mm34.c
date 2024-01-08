#include <stdio.h>

int main()
{
    int x;
    while(scanf("%d",&x)!=EOF)
    {
        for(int i=1;i<=x;i++)//尋找x的所有因數
        {
            if(x%i==0)
            {
                printf("%d",i);
                if(i==x)//為了讓輸出符合題目要求
                {
                    printf("\n");
                }
                else
                {
                    printf(" ");
                }
            }
        }
    }
}