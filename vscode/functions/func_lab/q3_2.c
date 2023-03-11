#include<stdio.h>
void cube(int n)
{
    int c =n*n*n;
    printf("\nCube=%d\n",c);

}
int main()
{
    int n;
       printf("Enter a number:",n);
       scanf("%d",&n);
       cube(n);
}