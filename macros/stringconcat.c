#include<stdio.h>
#include<string.h>
#define String_Concat(result,s1,s2) strcat(result,#s1) strcat(result,#s2) 
int main()
{
	char name[30]={0};
        String_Concat(name,Veda,Solutions);
	printf("Name %s\n",name);
}
