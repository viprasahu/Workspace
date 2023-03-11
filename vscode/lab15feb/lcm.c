#include<stdio.h>
int main()
{
    int a,b,max;
    printf("Enter 2 number:");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        max=a;
    }
    else
    {
        max=b;
    }
    printf("GCD=%d",a);
}