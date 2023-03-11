#include<stdio.h>
int area(int l,int b)
{
    int a=l*b;
    return a;

}
int peri(int l,int b)
{
    int p=(l+b)*2;
    return p;

}
int main()
{
    int l,b,p,a;
    printf("Enter length and breadth of the rectangle:");
    scanf("%d%d",&l,&b);
    a=area(l,b);
    p=peri(l,b);
    printf("\nArea of the reactangle=%d\nPerimeter of the reactangle=%d\n\n",a,p);
}