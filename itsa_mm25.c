#include <stdio.h>

int main()
{
    int x,total;
    while(scanf("%d",&x)!=EOF)
    {
        total=0;
        for(int i=1;i<=x;i++)
        {
            if(i%3==0)
            {
                total+=i;
            }
        }
        printf("%d\n",total);
    }
}