#include<stdio.h>
void count();
int main()
{
    for(int i=0; i<5;i++)
    {
       count();
    }
    count();
    {
        count();
        {
            count();
        }
    }
    
}

void count()
{
    static int c=0;
    c++;
    printf("%d %d\n",c,&c);

}