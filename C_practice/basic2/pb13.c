#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if (n>=0){
        if (n%2!=0)
        {
            printf("Positive Odd");
        }
        else{
            printf("Positive Even");
        }
    }
    else{
        if (n%2!=0)
        {
            printf("Negative Odd");
        }
        else{
            printf("Negative Even");
        }
    }
}