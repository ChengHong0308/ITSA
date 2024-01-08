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
            money+=(x-120)*y*1.66;//121小時以上 基本時薪(y)*1.66
            x=120;
        }
        if(x>60)
        {
            money+=(x-60)*y*1.33;//61~120小時 基本時薪(y)*1.33
            x=60;
        }
        money+=x*y;//60小時以下 基本時薪(y)
        printf("%.1lf\n",money);
    }
}
