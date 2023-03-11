#include<stdio.h>
void add(int *a,int *b)
{
    *a= *a+*b;
}
int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    add(&a,&b);
    printf("sum=%d",a);
}