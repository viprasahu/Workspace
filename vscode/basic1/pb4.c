#include<stdio.h>
int main()
{
    int n1,n2; 
    float w1,w2;
    printf("Input the weight of the first item:");
    scanf("%f",&w1);
    printf("Input the number of the first item:");
    scanf("%d",&n1);
    printf("Input the weight of the second item:");
    scanf("%f",&w2);
    printf("Input the number of the second item:");
    scanf("%d",&n2);
    printf("Average=%.2f",((w1*n1)+(w2*n2))/(n1+n2));
}