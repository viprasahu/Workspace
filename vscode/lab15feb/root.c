#include<stdio.h>
#include<math.h>
int main()
{
    int a ,b,c,d;
    float r1,r2;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-(4*c*c);
    if(d>0)
    {
        r1=(-b+sqrt(d))/2*a;
        r2=(-b-sqrt(d))/2*a;
        printf("roots are %.2f and %.2f",r1,r2);
    }
    else if(d==0)
    {
        r1=r2=-b/2*a;
       printf("roots are %.2f and %.2f",r1,r2);
    }
    else               
    {
        r1=r2=-b/2*a;
       printf("roots are %.2f+%di and %.2f-%di",r1,d,r2,d);
    }
}