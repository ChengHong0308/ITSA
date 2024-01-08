#include <stdio.h>

int main()
{
    int x,sum;
    while(scanf("%d",&x)!=EOF)
    {
        sum=0;
        for(int i=1;i<=x;i++)
        {
            if(i%6==0 && i%12!=0)//加總1~x之間能被2和3整除(6的倍數),但不能被12整除
            {
                sum+=i;
            }
        }
        printf("%d\n",sum);
    }
}