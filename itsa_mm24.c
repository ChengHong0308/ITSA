#include <stdio.h>

int main()
{
    int x;
    double y,money;
    while(scanf("%d",&x)!=EOF)
    {
        money=0;
        scanf("%lf",&y);
        if(x>120)
        {
            money+=(x-120)*y*1.66;
            x=120;
        }
        if(x>60)
        {
            money+=(x-60)*y*1.33;
            x=60;
        }
        money+=x*y;
        printf("%.1lf\n",money);
    }
}