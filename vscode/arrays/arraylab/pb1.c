#include<stdio.h>
int main()
{
    int n,a[10],sum=0;
    printf("enter elements of a");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        sum+=a[i];
    }
    printf("%d\t",sum);

}