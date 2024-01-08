#include <stdio.h>
#include <math.h>

int main()
{
    double xSpeed=1,ySpeed=30*2.54/100;
    int distance,second;
    while(scanf("%d",&distance)!=EOF)
    {
        second=(int)ceil(distance/(xSpeed-ySpeed));//x追上y的時間=距離/xy速度差,ceil為向上取整
        printf("%d\n",second);
    }
}
