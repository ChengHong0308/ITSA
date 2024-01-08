#include <stdio.h>

int main()
{
    int x,y;
    while(scanf("%d",&x)!=EOF)
    {
        int total=0;
        scanf("%d",&y);
        for(int i=x;i<=y;i++)//計算兩整數間所有整數的總和
        {
            total+=i;
        }
        printf("%d\n",total);
    }
}