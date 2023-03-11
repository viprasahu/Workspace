#include<stdio.h>
int main()
{
    int n,a[20],num,count=0;
    printf("enter length:\n");
    scanf("%d",&n);
    printf("enter elements of a");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number to be searched:\n");
    scanf("%d",&num);
    for (int i = 0; i < n; i++)
    {
        if(a[i]==num)
        {
            printf("Number is at index %d\n",i+1);
            count++;
        }
    }
    printf("Ocuurence of the elements= %d",count);

}