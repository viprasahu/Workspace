#include<stdio.h>
int main()
{
    int n,a[20],m,t;
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
    printf("\nenter index to be deleted:\n");
    scanf("%d",&m); 
    for (int i = m-1; i <=n-1; i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]=0;
    n=n-1;
    printf("after\n");
     for (int i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
}