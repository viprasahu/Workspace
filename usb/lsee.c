#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<errno.h>
#include<unistd.h>
int main()
{
	int fd,offset;
	char buf[20]="HELLO WORLD ABCD";
	fd=open("/home/vipra/workspace/usb/hello.txt",O_RDWR|O_CREAT);
	if(fd==-1)
	{
		printf("Failed to create file\n");
	}
	else
	{
		printf("File created successfully\n");
	}
	write(fd,buf,20);
	for (int i=0;i<10;i++)
	{
	offset=lseek(fd,i,SEEK_SET);
        read(fd,buf,20);
	printf("%s \n",buf);
	printf("Cursor is at=%d \n",offset);
	}

}
