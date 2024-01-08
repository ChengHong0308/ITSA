#include <stdio.h>
#include <math.h>

int main() {
    double c,f;
    while(scanf("%lf",&c)!=EOF)//輸入攝氏
    {
        f=(c*9/5)+32;//轉換成華氏
        printf("%0.1lf\n",f);//輸出四捨五入至小數點第一位的華氏溫度
    }
    
}
