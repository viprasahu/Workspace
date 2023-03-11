#include<stdio.h>
int main()
{
    int num,j,c=0;
    printf("Enter a number:");
    scanf("%d",&num);
    
    for(int i=7;i>=0;i--)
    {
       j=(num>>i)&0x01;
       if(j==1)
       {
        c++;
       }
    }
    printf("%d\n",c);
 
}