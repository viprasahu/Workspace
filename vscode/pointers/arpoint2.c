#include<stdio.h>
int main()
{
    int a[5]={0,1,2,3,4};
    int *p=a;
    printf("elements\n");
    for (int i = 0; i <5; i++)
    {
       printf("%d\t",a[i]);
    }
    int pt=(p+4)-(p+2);
    printf("\n%d\t",pt);
    printf("\n%d\t",*(p+4)); 
  //  void *p=8;
  //  printf("%x",p);

}