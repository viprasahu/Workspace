#include<stdio.h>
int a=10;
int main()
{
    printf("%d\n",a);
    int a=20;
    printf("%d\n",a);
    {
        int a=30;
        printf("%d\n",a);
        {
          int a=40;
          printf("%d\n",a);
        }

    }
    printf("%d\n",a);
}