#include<stdio.h>
#include<string.h>
#define MAX 10
struct employee
{
    int empno;
    float sal;
    char ename[20];
};

int main()
{
    struct employee e[MAX]={{10,50000,"Annie"},{20,56000,"Alex"},{30,90000,"Alex"},{40,10000,"Alex"},{50,60000,"Alex"},{60,50000,"Alex"},{70,50000,"Alex"},{80,50000,"Alex"},{90,50000,"Alex"}};
    for(int i=0;i<MAX;i++)
    {
        printf("\nEmployee %d\n",i+1);
        printf("Employee no=%d\nEmployee name=%s\nEmployee salary=%.2f\n",e[i].empno,e[i].ename,e[i].sal);
    }
}