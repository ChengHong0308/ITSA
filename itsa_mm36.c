#include <stdio.h>

int main()
{
    int month;
    while(scanf("%d",&month)!=EOF)
    {
        if(month>=3 && month<=5)//3~5 月為春季
        {
            printf("Spring\n");
        }
        else if(month>=6 && month<=8)//6~8 月為夏季
        {
            printf("Summer\n");
        }
        else if(month>=9 && month<=11)//9~11 月為秋季
        {
            printf("Autumn\n");
        }
        else if(month>=12 || month<=2)//12~2 月為冬季
        {
            printf("Winter\n");
        }
    }
}