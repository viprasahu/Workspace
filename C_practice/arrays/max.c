#include<stdio.h>
int main()
{
    int n,a[20],max=0;
    printf("enter length:\n");
    scanf("%d",&n);
    printf("enter elements of a");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("Max element is %d\t",max);

}