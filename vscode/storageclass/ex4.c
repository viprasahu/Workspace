#include<stdio.h>
int main()
{
   
    register int i=10;
    for ( i = 0; i <=10; i++)
    {
        printf("%d %d\n",i,&i);
    }
    

    
}
