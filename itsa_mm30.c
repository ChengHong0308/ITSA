#include <stdio.h>

int main()
{
    int x;
    while(scanf("%d",&x)!=EOF)
    {
        int isPrime=1;
        for(int i=2;i<x;i++)
        {
            if(x%i==0)
            {
                isPrime=0;
                break;
            }
        }
        if(isPrime)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}