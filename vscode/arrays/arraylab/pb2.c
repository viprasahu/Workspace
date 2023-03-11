#include<stdio.h>
int main()
{
    int n=10,a[10],s1=0,s2=0;
    printf("enter elements of a");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0,j=n/2; i < n/2,j<n; i++,j++)
    {
        s1+=a[i];
        s2+=a[j];
    }
    if(s1==s2)
    {
        printf("Both the sum are equal, sum=%d",s1);
    }
    else
    {
        printf("sum=%d,%d both the sum are not equal",s1,s2);
    }

}