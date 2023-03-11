#include<stdio.h>
int add(int *a,int *b)
{
    return *a + *b;
}
int sub(int *a,int *b)
{
    return *a -*b;
}
int mul(int *a,int *b)
{
    return *a * *b;
}
int div(int *a,int *b)
{
    return *a/ *b;
}
int main()
{
    int a=3,b=2;
    printf("sum=%d\n",add(&a,&b));
    printf("difference=%d\n",sub(&a,&b));
    printf("product=%d\n",mul(&a,&b));
    printf("quotient=%d\n",div(&a,&b));

}