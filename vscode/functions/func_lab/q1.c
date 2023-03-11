#include<stdio.h>
void add(int,int);
int sub(int,int);
int mul(int,int);
void div(int,int);
int main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    add(a,b);
    printf("difference=%d\n",sub(a,b));
    printf("product=%d\n",mul(a,b));
    div(a,b);
}
void add(int a,int b)
{
    printf("sum=%d\n",a+b);
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return 10*5;
}
void div(int a,int b)
{ 
    printf("quotient=%d",a/b);
}