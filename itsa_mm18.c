#include <stdio.h>

int main()
{
    int x;
    while(scanf("%d",&x)!=EOF)
    {
        for (int i=7;i>=0;i--)//從最左邊開始一個一個印數字
        {
            int bit=(x>>i)&1;//把要印的數字移到最右邊和1 & 取出
            printf("%d",bit);
        }
        printf("\n");
    }
}