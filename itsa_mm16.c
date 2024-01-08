#include <stdio.h>

int main()
{
    int x,y;
    while(scanf("%d",&x)!=EOF)
    {
        scanf("%d",&y);
        int distance=x*x+y*y;//兩點距離公式
        if(distance<=10000)//判斷在不在半徑100的圓內
        {
            printf("inside\n");
        }
        else
        {
            printf("outside\n");
        }
    }
}