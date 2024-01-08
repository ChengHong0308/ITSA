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
            printf("Value of more than 31\n");//按照題目要求輸出
        }
        else
        {
            ans=1<<x;//2的次方(SHIFT)
            printf("%d\n",ans);
        }
    }
}
