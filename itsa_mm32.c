#include <stdio.h>

int main()
{
    int x,i,j,k;
    while(scanf("%d",&x)!=EOF)
    {
        i=x/100;//i=x的百位數
        j=(x%100)/10;//j=x的十位數
        k=x%10;//k=x的個位數
        if(x==(i*i*i+j*j*j+k*k*k))//判斷是不是阿姆斯壯數
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}