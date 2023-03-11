#include<stdio.h>
int main()
{
   int a,h,f,t,tn,five,two,o;
    printf("Enter days:");
    scanf("%d",&a);
    h=a/100;
    a=a-(h*100);
    f=a/50;
    a=a-(f*50);
    t=a/20;
    a=a-(t*20);
    tn=a/10;
    a=a-(tn*10);
    five=a/5;
    a=a-(five*5);
    two=a/2;
    a=a-(two*2);
    o=a/1;
    printf("Notes of 100:%d\nNotes of 50:%d\nNotes of 20:%d\nNotes of 10:%d\nNotes of 2:%d\nNotes of 1:%d\n",h,f,t,tn,five,two,o);
}