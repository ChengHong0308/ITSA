#include <stdio.h>

int main()
{
    float up,down,high,ans;
    while(scanf("%f",&up)!=EOF)
    {
        scanf("%f %f",&down,&high);
        ans=(up+down)*high/2;//梯形面積公式
        printf("Trapezoid area:%.1f\n",ans);
    }
}
