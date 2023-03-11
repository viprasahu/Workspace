#include<stdio.h>
float si(int p,float r,int t)
{
    float s=p*r*t/100.0;
    return s;

}
int main()
{
    int p,r,t;
    float s;
    for (int i=1; i<=3;i++)
    {
       printf("Enter a principal amount, interest rate and time period for case%d:",i);
       scanf("%d%d%d",&p,&r,&t);
       s=si(p,r,t);
       printf("\nSimple Interest=%.2f\n\n",s);
    }
}