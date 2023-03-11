#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int n,a[20];
    printf("enter length:\n");
    scanf("%d",&n);
    printf("enter elements");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }

}