#include<stdio.h>
#include<string.h>
struct emp
{
    int empno;
    float sal;
    char ename;
}employee;

int main()
{
    employee.empno=10;
    employee.sal=1000;
    employee.ename='a';
    //(strcpy(employee.ename,"SDI"));
    printf("%u",sizeof(employee));
}