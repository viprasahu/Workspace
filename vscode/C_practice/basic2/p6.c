#include<stdio.h>
int main()
{
    int n1,n2,sum=0; 
        printf("Enter first number:");
        scanf("%d",&n1);
        printf("Enter second number:");
        scanf("%d",&n2);
        if (n2<=n1)
        {
           printf("%.2f",((float)n1)/n2);
        }
        else
        {
            printf("Division not possible");
        }
}