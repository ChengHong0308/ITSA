#include <stdio.h>

int main()
{
    float down,high,ans;
    while(scanf("%f",&down)!=EOF)
    {
        scanf("%f",&high);
        ans=down*high/2;
        printf("%.1f\n",ans);
    }
}