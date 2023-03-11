#include<stdio.h>
int pri(int n)
{
    if (n<1)
      return;
    else
      return (1+ pri(n/2));

}
int main()
{
    int x;
    x=pri(10);
    printf("%d",x);
    return 0;
}