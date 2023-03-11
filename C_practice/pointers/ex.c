#include<stdio.h>
int main()
{
    int a=3;
    int *p=&a;
    float b=4.0;
    float *q=&b;
    char c='c';
    char *x=&c;
   // printf("%d",*x);
   /* void *y=&a;
    printf("a=%d\n",*(int*)y);
    y=&b;
    printf("b=%f\n",*(float*)y);
    y=&c;
    printf("c=%c\n",*(char*)y);
    */
   printf("a=%d\n",*p);
   *p++;
   printf("a=%d\n",*p);
   printf("add a=%x\n",p);
   p++;
   printf("add a=%x\n",p);
   
   printf("int-%x\n",sizeof(*p));
   printf("float-%x\n",sizeof(*q));
   printf("char%x\n",sizeof(*x));
}