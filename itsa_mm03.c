#include <stdio.h>

int main()
{
    int x,y,ans;
    while(scanf("%d",&x)!=EOF)
    {
        scanf("%d",&y);
        ans=x+y;
        printf("%d\n",ans);
    }
}