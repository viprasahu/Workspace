#include<stdio.h>
#include<string.h>
struct employee
{
    int empno;
    float sal;
    char ename[20];
};

int main()
{
    int MAX;
    printf("enter max :");
    scanf("%d",&MAX);

    struct employee e[MAX];
    for(int i=0;i<MAX;i++)
    {
        printf("\n Enter Employee %d details \n",i+1);
        scanf("%d%s%f",&e[i].empno,&e[i].ename,&e[i].sal);
    }
    for(int i=0;i<MAX;i++)
    {
        printf("\nEmployee %d\n",i+1);
        printf("Employee no=%d\nEmployee name=%s\nEmployee salary=%.2f\n",e[i].empno,e[i].ename,e[i].sal);
    }
}