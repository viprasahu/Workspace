#include<stdio.h>
int main()
{
    int n,a[20],b[20];
    printf("enter length:\n");
    scanf("%d",&n);
    printf("enter elements of a");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("elements of b after coping");
    for (int i = 0; i < n; i++)
    {
        b[i]=a[i];
        printf("%d\t",b[i]);
    }

}