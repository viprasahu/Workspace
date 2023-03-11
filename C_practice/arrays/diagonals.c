#include<stdio.h>
int main()
{
    int n,a[20][20],m,i,j;
    printf("enter dimension of the matrix:\n");
    scanf("%d%d",&n,&m);
    printf("enter elements\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("left diagonal\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t",a[i][i]);
    }
    printf("\nright diagonals:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t",a[i][n-1-i]);
    }
}