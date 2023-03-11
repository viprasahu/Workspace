#include<stdio.h>
void add(int *a,int *b)
{
    *a= *a+*b;
}
int main()
{
    int a=3,b=2;
    add(&a,&b);
    printf("sum=%d",a);
}