#include<stdio.h>
int main()
{
    int n, fact=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<=0){
        printf("Factoial doesnt exist");
    }
    else if(n==1)
    {
        printf("Factoial is 1");

    }
    else
    {
       for(int i=2;i<=n;i++)
       {
          fact*=i;
       
       }
       printf("Factorial of number is %d",fact);
    }
    
}