#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    int *p=&a,*q=&b;
    *p>*q ? printf("%d is greater than %d",*p,*q) : printf("%d is greater than %d",*q,*p);
}