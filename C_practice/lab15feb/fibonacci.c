#include<stdio.h>
int main()
{
    int n, n1=0,n2=1,f;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n==0){
        printf("0");
    }
    else if(n==1)
    {
        printf("%d %d ",n1,n2);

    }
    else
    {
       printf("%d %d ",n1,n2);
       for(int i=2;i<n;i++)
       {
          f=n1+n2;
          n1=n2;
          n2=f;
          printf("%d ",f);
       
       }
    }
    
}