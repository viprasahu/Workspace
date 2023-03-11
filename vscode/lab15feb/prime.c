#include<stdio.h>
int main()
{
    int n1,c=0;
    printf("Enter a number:");
    scanf("%d",&n1);
    for (int i=2; i<=n1/2;i++)
    {
        if(n1%i==0)
        {
            c+=1;
        }
    }
    if(c>0)
    {
        printf("Not prime");
    }
    else
    {
        printf("Prime");
    }
}