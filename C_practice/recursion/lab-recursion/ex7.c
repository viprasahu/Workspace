#include<stdio.h>
void display()
{
    static int x=5;
    int y=5;
    x+=1;
    y+=1;
    printf("x=%d\n",x);
    printf("y=%d\n",y);
}
int main()
{
    for(int i=0; i<3;i++)
    {
      display();
    }
    return 0;
}