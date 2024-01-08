#include <stdio.h>

int main()
{
    int time;
    while(scanf("%d",&time)!=EOF)
    {
        double i=0.9;//800分鐘以內 0.9元/分鐘
        double j=0.9*0.9;//800~1500分鐘 9折
        double k=0.9*0.79;//1500分鐘以上 79折
        if(time<=800)
        {
            printf("%.1lf\n",time*i);
        }
        else if(time<1500)
        {
            printf("%.1lf\n",time*j);
        }
        else
        {
            printf("%.1lf\n",time*k);
        }
    }
}