#include<stdio.h>
int cube()
{
    int n,c;
       printf("Enter a number:",n);
       scanf("%d",&n);
       c=n*n*n;
       return c;
       

}
int main()
{
    int c=cube();
    printf("\nCube=%d\n",c);
}