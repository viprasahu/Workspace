#include<stdio.h>
int main()
{
    int a,j,k,d,e,f,l,z,y;
    printf("Enter the value of a");
    scanf("%d",&a);
    k=1<<5;
    l=1<<0;
    f=k|l;
    printf("binary form after switching on bit pos 3 and turn off 7\n");
    for(int i=7; i>=0; i--)
    {
        j=(a>>i)&1;
        d=(k>>i)&1;
        e=(l>>i)&1;
        z=(f>>i)&1;
        y=j^z;
        printf("%d",y);

    }
}