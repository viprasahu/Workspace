#include<stdio.h>
int main()
{
    int n,i=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while (n!=0){
        n=n/10;
        i++;
   }
    printf("No of the digits=%d",i);
}