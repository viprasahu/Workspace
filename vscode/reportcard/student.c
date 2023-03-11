#include<stdio.h>
#include"report.h"
int main()
{   int c,p,m,e,b;
    float cg;
    c=chem();
    p=physics();
    b=bio();
    m=maths();
    cg=cgpa(c,p,b,m);
    printf("\n\n Student Report Card\n\n");
    printf("Chemistry:  Marks-%d Grade-%c\n",c,grade(c));
    printf("Physics:  Marks-%d Grade-%c\n",p,grade(p));
    printf("Biology:  Marks-%d Grade-%c\n",b,grade(b));
    printf("Math:  Marks-%d Grade-%c\n",m,grade(m));
    printf("\nCGPA:  %.2f\n",cg);

}