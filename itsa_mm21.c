#include <stdio.h>

int main()
{
    long long int x;
    while(scanf("%lld",&x)!=EOF)
    {
        long long int ans=1;
        for(int i=2;i<=x;i++)
        {
            ans=ans*i;
        }
        printf("%lld\n",ans);
    }
}