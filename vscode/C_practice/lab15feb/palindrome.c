#include<stdio.h>
int main()
{
    int n1,num,n,rev=0;
    printf("Enter a 3 digit number:");
    scanf("%d",&n1);
    num=n1;
    for (int i=0; i<3;i++)
    {
        n=num%10;
        rev=rev*10+n;
        num=num/10;
    }
    if(rev==n1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}