#include<stdio.h>
int main()
{
    int n,a[20][20],m,b[20][20],c[20][20];
    printf("enter dimension of the matrix:\n");
    scanf("%d%d",&n,&m);
    printf("enter elements of a");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter elements of b");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\naddition of two matrix=:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j]=a[i][j]+b[i][j];
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}