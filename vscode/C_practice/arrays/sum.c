#include<stdio.h>
int main()
{
    int n,a[20],b[20],sum=0;
    printf("enter length:\n");
    scanf("%d",&n);
    printf("enter elements of a");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
    }
    printf("%d\t",sum);

}