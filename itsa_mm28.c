#include <stdio.h>

int main()
{
    int x;
    while(scanf("%d",&x)!=EOF)
    {
        for(int i=1;i<=x;i++)
        {
            if(i%35==0)//列出1到x之間屬於5和7的倍數(35的倍數)
            {
                if(x-i<35)
                {
                    printf("%d",i);
                }
                else
                {
                    printf("%d ",i);
                }
            }
        }
        printf("\n");
    }
}