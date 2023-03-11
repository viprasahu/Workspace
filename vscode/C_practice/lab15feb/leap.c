#include<stdio.h>
int main()
{
    int y;
    printf("Enter the year: ");
    scanf("%d",&y);
    if(y%400==0 && y%100==0)
    {
       printf("Its a leap year");
    }
    else if(y%4==0)
    {
       printf("Its a leap year");
    }
    else               
    {
       printf("Its not a leap year");
    }
}