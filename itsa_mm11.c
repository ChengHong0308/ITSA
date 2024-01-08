#include <stdio.h>
#include <math.h>

int main() 
{
    int money;
    while(scanf("%d",&money)!=EOF)//輸入車票錢
    {
        if(money>=10)
        {
            printf("NT10=%d\n",money/10);
            money=money%10;
        }
        else
        {
            printf("NT10=0\n");
        }
        if(money>=5)
        {
            printf("NT5=%d\n",money/5);
            money=money%5;
        }
        else
        {
            printf("NT5=0\n");
        }
        if(money>=1)
        {
            printf("NT1=%d\n",money/1);
            money=money%1;
        }
        else
        {
            printf("NT1=0\n");
        }
    }
}
