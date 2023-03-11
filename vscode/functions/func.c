#include<stdio.h>
void add();
int sub(int,int);
int mul();
void div(int,int);
int main()
{
    int a=10,b=5;
    add();
    printf("Sub=%d\n",sub(a,b));
    printf("mul=%d\n",mul());
    div(a,b);
}
void add()
{
    printf("add=%d\n",10+5);
}
int sub(int a,int b)
{
    return a-b;
}
int mul()
{
    return 10*5;
}
void div(int a,int b)
{ 
    printf("div=%d",a/b);
}