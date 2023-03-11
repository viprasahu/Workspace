#include<stdio.h>
int main()
{
     int n,a[20],t;
    printf("enter length:\n");
    scanf("%d",&n);
    printf("enter elements of a");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i <=n/2; i++)
    {
        t=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=t;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }

}