#include<stdio.h>
int main()
{
    int a[10],n;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int *p=a;
    printf("Enter elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",(p+i));
    }
    for (int i = 0; i < n; i++)
    {
        printf("element-%d : %d \n",i,*(p+i));
    }

}