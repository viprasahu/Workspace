#include<stdio.h>
int main()
{
    float n1,n2; 
        printf("Enter first number:");
        scanf("%f",&n1);
        printf("Enter second number:");
        scanf("%f",&n2);
        n1=n1+n2;
        n2=n1-n2;
        n1=n1-n2;
        printf("After swapping: %.2f\t%.2f",n1,n2);
}