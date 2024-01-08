#include <stdio.h>

int main()
{
    int x,y;
    while(scanf("%d",&x)!=EOF)
    {
        scanf("%d",&y);
        printf("%d+%d=%d\n",x,y,x+y);
        printf("%d*%d=%d\n",x,y,x*y);
        printf("%d-%d=%d\n",x,y,x-y);
        if(x%y<0)//題目要求餘數>=0
        {
            if(x/y<0)//-10/3=-3...-1,-10/3=-4...2
            {
                printf("%d/%d=%d...%d\n",x,y,(x/y)-1,x%y+y);
            }
            else//-10/-3=3...-1,-10/-3=4...2
            {
                printf("%d/%d=%d...%d\n",x,y,(x/y)+1,x%y-y);
            }
        }
        else
        {
            printf("%d/%d=%d...%d\n",x,y,x/y,x%y);
        }
    }
}
