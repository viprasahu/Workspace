#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n); 
    sizeof(n%5)==0 ? printf("expression 1 executed") : printf("expression 2 executed");
 
}