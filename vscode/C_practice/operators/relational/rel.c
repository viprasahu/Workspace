#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 numbers");
    scanf("%d%d",&a,&b);
    printf("%d < %d: ",a,b);
    a<b ? printf("true\n") : printf("false\n");
    printf("%d > %d: ",a,b);
    a>b ? printf("true\n") : printf("false\n");
    printf("%d <= %d: ",a,b);
    a<=b ? printf("true\n") : printf("false\n");
    printf("%d >= %d: ",a,b);
    a>=b ? printf("true\n") : printf("false\n");
    printf("%d != %d: ",a,b);
    a!=b ? printf("true\n") : printf("false\n");
    printf("%d == %d: ",a,b);
    a==b ? printf("true\n") : printf("false\n");
}