#include<stdio.h>
int main()
{
    int x,y,r=1;
    printf("\nEnter x,y:");
    scanf("%d%d",&x,&y);
    for(int i=0;i<y;i++)
    {
       r*=x;
    }
    printf("\nx=%d\n\n",r);
}