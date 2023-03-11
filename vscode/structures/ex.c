#include<stdio.h>
int main()
{
    int a;
    int b=((int)&a)%(sizeof(a));
    if(b==0)
    {
        printf("aligned memory space");
    }
    else
    {
        printf("unaligned");
    }

}