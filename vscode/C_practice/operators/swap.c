/*/ program explains about swapping of two numbers
usage: arithmetic operators 
*/
#include<stdio.h>
int main()
{
   int a,b;
   printf("enter 2 numbers: ");
   scanf("%d%d",&a,&b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("a=%d,b=%d\n",a,b);
}