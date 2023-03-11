#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 2 number:");
    scanf("%d%d",&a,&b);
    while (b>0)
    {
        c=a%b;
        a=b;
        b=c;
    }
    printf("GCD=%d",a);
}