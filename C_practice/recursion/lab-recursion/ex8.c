#include<stdio.h>
void display(int n)
{
    static int d=1;
    printf("n=%d\t",n);
    printf("d=%d\n",d);
    d++;
    if(n>1)
        display(n-1);
    printf("d=%d\n",d);
}
int main()
{
    
    display(3);
    return 0;
}