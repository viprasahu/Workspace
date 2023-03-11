#include<stdio.h>
int main()
{
    int a=4,b=5;
    printf("binary of a: ");
    for(int i=7;i>=0;i--)
    {
       int j=(a>>i)&1;
      printf("%d",j);
    }
    printf("\nbinary of b: ");
    for(int i=7;i>=0;i--)
    {
      int j=(b>>i)&1;
      printf("%d",j);
    }
    printf("\nbinary of a AND b :");
    for(int i=7;i>=0;i--)
    {
      int j=((a>>i)&(b>>i))&1;
      printf("%d",j);
    }
}