#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE *fptr;
	int ch;
	if((fptr=fopen("myfile","w"))==NULL)
	{
		printf("File does not exist\n");
		exit(1);
	}
	printf("Enter text :\n");
	while((ch=getchar())!=EOF)  
		fputc(ch,fptr);
	fclose(fptr);
	return 0;
}