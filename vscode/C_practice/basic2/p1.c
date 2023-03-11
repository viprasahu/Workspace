#include<stdio.h>
int main()
{
    int i,n,sum=0;
    for (i=0;i<5;i++)
    {   
        printf("Enter:");
        scanf("%d",&n);
        if (n%2!=0)
        {
            sum=sum+n;
        }
    }
    printf("Sum of all odd values:%d",sum);
}