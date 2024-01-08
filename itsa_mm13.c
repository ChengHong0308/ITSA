#include <stdio.h>

int main()
{
    int startHour,startMin,endHour,endMin;
    while(scanf("%d",&startHour)!=EOF)
    {
        scanf("%d %d %d",&startMin,&endHour,&endMin);
        int start,end,time,money=0;
        start=startHour*60+startMin;//轉成分鐘
        end=endHour*60+endMin;//轉成分鐘
        time=end-start;
        time=time/30;//有幾個半小時,未滿半小時不計費
        if(time>8)//四小時以上 半小時60
        {
            money+=60*(time-8);
            time=8;
        }
        if(time>4)//兩小時以上 未滿四小時 半小時40
        {
            money+=40*(time-4);
            time=4;
        }
        money+=30*time;//未滿兩小時 半小時30
        printf("%d\n",money);
    }
}