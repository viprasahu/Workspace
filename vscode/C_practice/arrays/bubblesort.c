#include<stdio.h>
int main()
{
    int n,a[20],t;
    printf("enter length:\n");
    scanf("%d",&n);
    printf("enter elements");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("before\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    for (int i = 0; i <=n-1; i++)
    {
        for (int j = 0; j< n-1-i; j++)
        {
            if (a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("\nafter sorting\n");
     for (int i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
}