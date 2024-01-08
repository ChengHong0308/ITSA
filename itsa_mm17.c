#include <stdio.h>

int main()
{
    int x,y,ans;
    while(scanf("%d",&x)!=EOF)
    {
        scanf("%d",&y);
        int min;
        if(x>=y)
        {
            min=y;
        }
        else
        {
            min=x;
        }
        for(int i=1;i<=min;i++)
        {
            if(x%i==0 && y%i==0)//找最大公因數
            {
                ans=i;
            }
        }
        printf("%d\n",ans);
    }
}