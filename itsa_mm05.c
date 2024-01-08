#include <stdio.h>
#include <math.h>

int main()
{
    double x,ans;
    while(scanf("%lf",&x)!=EOF)
    {
        ans=x*x;
        printf("%0.1lf\n",floor((ans*10)+0.5)/10);//四捨五入到小數點後一位(floor:向下取整)
    }
}