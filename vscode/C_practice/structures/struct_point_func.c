#include<stdio.h>
#include<string.h>

struct employee
{
    int empno;
    float sal;
    char ename[20];
    int *p;
};
void read(struct employee *p)
{
    printf("\n Enter Employee details \n");
    scanf("%d%s%f",p->empno,p->ename,p->sal);
}
void display(struct employee *p)
{
        
    printf("Employee no=%d\nEmployee name=%s\nEmployee salary=%.2f\n",p->empno,p->ename,p->sal);
    
}
int main()
{

    struct employee e,*p;
    p=&e;
    read(p);
    display(p);

}