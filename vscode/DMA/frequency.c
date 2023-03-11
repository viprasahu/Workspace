#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *num, *freq, i, size;
    printf("Enter the size of the list:");
    scanf("%d",&size);
    num = (int *)malloc(size * sizeof(int));
    printf("Enter the numbers:");
    for(i =0;i <size;i++)
    {
        printf("\nEnter num[%d]:",i);
        scanf("%d",&num[i]);
        if(num[i]<0 || num[i]>4)
        {
            printf("\nNumber should be within range (0-4)");
            i--;
            continue;
        }
    }
    freq = (int *)calloc(5, sizeof(int));
    for(i=0; i<size; i++)
    {
        freq[num[i]]++;
    }
    printf("The frequencies of the numbers are: ");
    for(i=0;i<5;i++)
    {
        printf("\n freq[%d] = %d",i,freq[i]);
    }
}