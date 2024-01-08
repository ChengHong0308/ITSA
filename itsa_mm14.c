#include <stdio.h>

int main()
{
    int second;
    while(scanf("%d",&second)!=EOF)
    {
        printf("%d days\n",second/86400);//一天有86400秒
        second=second%86400;
        printf("%d hours\n",second/3600);//一小時有3600秒
        second=second%3600;
        printf("%d minutes\n",second/60);//一分鐘有60秒
        second=second%60;
        printf("%d seconds\n",second);
    }
}