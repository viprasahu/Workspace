#include<stdio.h>
void display(int n)
{
    if (n<1)
      return;
    else
    {
        printf("%d\n",n);
        display(n-1);
        printf("%d\n",n);
    }
}
int main()
{
    int n=3;
    display(n);
}