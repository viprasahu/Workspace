#include<stdio.h>
int main()
{
    int num,n,rev=0;
    printf("Enter a 3 digit number:");
    scanf("%d",&num);
    for (int i=0; i<3;i++){
        n=num%10;
        rev=rev*10+n;
        num=num/10;
   }
    printf("Reverse = %d",rev);
}