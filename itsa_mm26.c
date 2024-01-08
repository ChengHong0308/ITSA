#include <stdio.h>

int main()
{
    int x;
    while(scanf("%d",&x)!=EOF)
    {
        for(int i=1;i<=x;i++)//輸出1*1~x*x的結果
        {
            printf("%d*%d=%d\n",i,i,i*i);
        }
    }
}
