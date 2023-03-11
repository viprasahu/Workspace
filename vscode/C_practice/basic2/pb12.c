#include<stdio.h>
int main()
{
    int n;
    printf("Enter:");
    scanf("%d",&n);
    if (n%2!=0)
    {
       printf("Odd");
    }
    else{
        printf("Even");
    }
}