#include <stdio.h>
#include <math.h>

int main()
{
    int x,y;
    while(scanf("%d",&x)!=EOF)
    {
        scanf("%d",&y);
        printf("%d\n",(x+y)*(x+y));//輸出兩數和的平方值
    }
}
