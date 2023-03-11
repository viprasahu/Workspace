#include<stdio.h>
int main()
{
    int n,a[20],c=0;
    printf("enter length:\n");
    scanf("%d",&n);
    printf("enter elements");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j=1; j<=a[i]/2;j++)
        {
            if(a[i]%j==0)
            {
                c++;
            }
        }
        if(c>0)
        {
          continue;
        }
        else
        {
          printf("%d",a[i]);
        }
        
    }
}