#include<stdio.h>
int main()
{
    int a=18,b=9,c,d,e=10;
    c=b++;
    d=b;
    printf(a<b<c>d);
    printf(b==e);
    printf(c+1>e);
    printf(a+c==b>e<c+d);
}