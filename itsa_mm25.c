#include <stdio.h>

int main()
{
    int x,total;
    while(scanf("%d",&x)!=EOF)
    {
        total=0;
        for(int i=1;i<=x;i++)
        {
            if(i%3==0)//計算1~x能被3整除之數值之總和
            {
                total+=i;
            }
        }
        printf("%d\n",total);
    }
}
