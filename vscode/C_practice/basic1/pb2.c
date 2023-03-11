#include<stdio.h>
int main()
{
   int d,y,w;
    printf("Enter days:");
    scanf("%d",&d);
    y=d/365;
    w=(d%365)/7;
    d=d-((y*365)+(w*7));
    printf("Years:%d\nWeeks:%d\nDays:%d\n",y,w,d);
}