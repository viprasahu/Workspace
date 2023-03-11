#include<stdio.h>
int main()
{
    char n; 
        printf("Enter a character:");
        scanf("%c",&n);
        if (n>='A' && n <='Z' || n>='a' && n <='z' )
        {
            printf("Its an alphabet");
        }
        else 
        {
            printf("Its not an alphabet");
        }
}