#include<stdio.h>
int calc(int x,int y,int z)
{
    int r=1;
    for(int i=0;i<y+z;i++)
    {
       r*=x;
    }
    return r;

}
int main()
{
    int x,y,z,r;
    printf("\nEnter x,y,z:");
    scanf("%d%d%d",&x,&y,&z);
    r=calc(x,y,z);
    printf("\nx=%d\n\n",r);
}