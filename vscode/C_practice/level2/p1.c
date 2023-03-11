#include<stdio.h>
int main()
{
    int a;
    printf("Enter a 4 digit number");
    scanf("%d",&a);
    if (a>=1000 && a<=9999)
    {
        a=(((a+8)/3)%4)*5;
    
        printf("Result=%d",a);
    }
    else
    {
        printf("Incorrect input, enter a 4digit number");
    }
}