#include<stdio.h>
int main(int argc,char *argv[])
{
    int n,sum=0,i;
    for (i=1;i<argc;i++)
    {
        sscanf(argv[i],"%d",&n);
        printf("%d\t",n);
    }
    printf("\nno of arguments=%d\nfilename=%s\n",i,argv[0]);
}