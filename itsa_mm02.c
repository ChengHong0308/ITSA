#include <stdio.h>

int main()
{
    float down,high,ans;
    while(scanf("%f",&down)!=EOF)
    {
        scanf("%f",&high);
        ans=down*high/2;//三角形面積公式
        printf("%.1f\n",ans);
    }
}
