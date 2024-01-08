#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    double ans;
    while(scanf("%d",&x)!=EOF)//輸入英里
    {
        ans=x*1.6;//轉換成公里
        printf("%0.1lf\n",floor((ans*10)+0.5)/10);//四捨五入到小數點後一位(floor:向下取整)
    }
}
