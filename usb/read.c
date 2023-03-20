#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<errno.h>
#include<unistd.h>
int main()
{
	int fd;
	char buf[20]="HELLO WORLD ABCD";
	fd=open("/home/vipra/workspace/usb/hello.txt",O_RDWR|O_CREAT);
	if(fd==-1)
	{
		printf("Failed to create file");
	}
	else
	{
		printf("File created successfully");
	}
	write(fd,buf,20);
	lseek(fd,9,SEEK_SET);
        read(fd,buf,20);
	printf("%s",buf);

}
