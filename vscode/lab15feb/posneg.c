#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n>=0)
    {
        printf("Positive Number");
    }
    else if (n==0)
    {
        printf("Number is zero");
    }
    
    else
    {
        printf("Negative Number");
    }
}