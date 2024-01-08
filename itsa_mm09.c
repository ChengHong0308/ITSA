#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    long long int ans;
    while(scanf("%d",&x)!=EOF)
    {
        if(x>31)
        {
            printf("Value of more than 31\n");
        }
        else
        {
            ans=1<<x;
            printf("%d\n",ans);
        }
    }
}