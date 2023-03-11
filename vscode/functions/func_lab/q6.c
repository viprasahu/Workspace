#include<stdio.h>
int calc(int x,int y)
{
    int r=1;
    for(int i=0;i<y;i++)
    {
       r*=x;
    }
    return r;

}
int main()
{
    int x,y,r;
    printf("\nEnter x,y:");
    scanf("%d%d",&x,&y);
    r=calc(x,y);
    printf("\nx=%d\n\n",r);
}