#include<stdio.h>
int main()
{
    int a,j;
    printf("enter a number");
    scanf("%d",&a);
    printf("binary of a: ");
    for(int i=7;i>=0;i--)
    {
       j=(a>>i)&1;
      printf("%d",j);
    }
    a=~a;
    printf("\nbinary of a complement :");
    for(int i=7;i>=0;i--)
    {
      j=((a>>i))&1;
      printf("%d",j);   
    }
}