#include<stdio.h>
int main()
{
   int d,y,m;
    printf("Enter days:");
    scanf("%d",&d);
    y=d/365;
    m=(d%365)/30;
    d=d-((y*365)+(m*30));
    printf("Years:%d\nMonths:%d\nDays:%d\n",y,m,d);
}
