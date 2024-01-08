#include <stdio.h>

int main()
{
    int decimal;
    while(scanf("%d",&decimal)!=EOF)
    {
        printf("%X\n",decimal);//直接用大寫的16進位輸出
    }
}