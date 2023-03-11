#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 numbers");
    scanf("%d%d",&a,&b);
    if(a<50 || a<b)
    printf("True");
    else
    printf("False");
    return 0;

}