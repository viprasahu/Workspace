#include<stdio.h>
int main()
{
    char n; 
        printf("Enter a character:");
        scanf("%c",&n);
        if (n>='A' && n <='Z' || n>='a' && n <='z' )
        {
        if (n=='a' || n=='e' || n=='i' || n=='o' || n=='u' ||n=='A' ||n=='E' || n=='I' || n=='O' || n=='U' )
        {
            printf("Its a vowel");
        }
        else
        {
            printf("Its a consonant");
        }
        }
        else 
        printf("Its a special character");
}