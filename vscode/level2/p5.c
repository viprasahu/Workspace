#include<stdio.h>
int main()
{
    int a,n,n1,n2;
    printf("Enter a 5 digit number");
    scanf("%d",&a);
    for (int i=0; i<5;i++){
        n=a%10;
        if (i==0){
            n1=n;
        }
        else if(i==3){
            n2=n;
        }
        a=a/10;
   }
    printf("Sum of 1st and 2nd last digit=%d",n1+n2);
}