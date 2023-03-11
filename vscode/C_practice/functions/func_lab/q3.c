#include<stdio.h>
int cube(int n)
{
    int c =n*n*n;
    return c;

}
int main()
{
    int n,c;
       printf("Enter a number:",n);
       scanf("%d",&n);
       c=cube(n);
       printf("\nCube=%d\n",c);
}