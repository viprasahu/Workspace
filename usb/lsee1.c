#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<errno.h>
#include<unistd.h>
int main()
{
	int fd,offset;
	char buf[20];
	fd=open("/home/vipra/workspace/usb/hello.txt",O_RDWR|O_CREAT|O_APPEND);
	if(fd==-1)
	{
		printf("Failed to create file\n");
	}
	else
	{
		printf("File created successfully\n");
	}

	offset=lseek(fd,5,SEEK_CUR);
	write(fd,"hello",5);
	printf("Cursor is at %d\n",offset);
	offset=lseek(fd,6,SEEK_CUR);
	write(fd," world",6);
        read(fd,buf,20);
	printf("%s \n",buf);
	printf("Cursor is at=%d \n",offset);
	

}
