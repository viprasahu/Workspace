#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        sum+=i;
       
    }
    printf("sum of 20 natural numbers is %d",sum);
    
}