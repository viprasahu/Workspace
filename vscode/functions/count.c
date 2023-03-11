#include<stdio.h>
//int c=0;
void count();
int main()
{
    for(int i=0; i<5;i++)
    {
       count();
    }
    
}

void count()
{
    static int c=0;
    c++;
    printf("%d\n",c);

}