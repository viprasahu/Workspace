#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    int *p=&a,*q=&b;
    printf("sum=%d",*p+*q);
}