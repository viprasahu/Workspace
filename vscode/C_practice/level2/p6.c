#include<stdio.h>
int main()
{
    int a,n,s=0;
    printf("Enter a 3 digit number:");
    scanf("%d",&a);
    for (int i=0; i<3;i++){
        n=a%10;
        s+=n;
        a=a/10;
   }
    printf("Sum of the digits=%d",s);
}