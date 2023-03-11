#include<stdio.h>
int main()
{
    int num,j,c=0;
    printf("Enter a number:");
    scanf("%d",&num);

    j=(num>>3)&0x01;
    if(j==1)
    {
       printf("On\n");
    }
    else
    {
       printf("Off\n");
    }
    
 
}