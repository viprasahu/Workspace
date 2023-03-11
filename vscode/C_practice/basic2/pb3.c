#include<stdio.h>
int main()
{
    int d,f; 
        printf("Input total distance in kms:");
        scanf("%d",&d);
        printf("Input total fuel spent in lites:");
        scanf("%d",&f);

        printf("Average consumption (km/lt) %.2f",((float)d)/f);
 
}