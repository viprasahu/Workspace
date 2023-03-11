#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter two numbers:");
    scanf("%d%d",&n1,&n2); 
    n1>n2 ? printf("%d is greater",n1) : printf("%d is greater",n2);
 
}