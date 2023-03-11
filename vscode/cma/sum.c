#include<stdio.h>
int main(int argc,char *argv[])
{
    int n,sum=0,i;
    for (i=1;i<argc;i++)
    {
        sscanf(argv[i],"%d",&n);
        sum+=n;
    }
    printf("%d",sum);
}