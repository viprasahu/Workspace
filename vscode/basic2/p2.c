#include<stdio.h>
int main()
{
    int eid,hrs,sal;
    printf("Enter the employee id, total worked hours and amount recieved per hour: ");
    scanf("%d%d%d",&eid,&hrs,&sal);
    printf("EmployeesID=%d\nSalary=%d",eid,sal);
    return 0;

}