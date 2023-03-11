#include<stdio.h>
void display()
{
    static int x;
    x+=10;
    printf("x=%d\n",x);
}
int main()
{
    display();
    display();
    return 0;
}