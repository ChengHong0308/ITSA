#include <stdio.h>

int main()
{
    int x,y;
    while(scanf("%d",&x)!=EOF)
    {
        scanf("%d",&y);
        if(x<=100 && y<=100)//判斷在不在100*100的正方形內
        {
            printf("inside\n");
        }
        else
        {
            printf("outside\n");
        }
    }
}