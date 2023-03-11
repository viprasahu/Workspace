/*Copy a file to another file*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE *sptr, *dptr;
	char ch;
	if((sptr=fopen("vipra","r"))==NULL)
	{
		printf("Error in opening source file\n");
		exit(1);
	}
	if((dptr=fopen("myfile","w"))==NULL)
	{
		printf("Error in opening destination file\n");
		exit(1);
	}
	while((ch=fgetc(sptr))!=EOF)
		fputc(ch,dptr);
	fclose(sptr);
	fclose(dptr);
	return 0;
}