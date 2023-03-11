/*/ program explains about arithmetic operators
usage: operators-'+','-','*','/','%'
syntax: operand <operator> operand
*/
#include<stdio.h>
int main()
{
    int a=5 ,b=3;
    printf("a+b=%d\n",a+b);
    printf("a-b=%d\n",a-b);
    printf("a*b=%d\n",a*b);
    printf("a/b=%.2f\n",((float)a)/b);
    printf("a mod b=%d\n",a%b);
}