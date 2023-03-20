#include <stdio.h>
#include <string.h>
#include <fcntl.h> 
#include <errno.h> 
#include <termios.h> 
#include <unistd.h> 

int main() {
        
  char data[20];
  int fd;
  fd = open("/dev/ttyUSB1", O_RDWR );
 if(fd == -1)
 {
  printf("unable to create file");
 }
 else
 {
  printf("file created successfully");
 }



  struct termios termi;

  tcgetattr(fd,&termi);

  termi.c_iflag &= ~(IXON | IXOFF | IXANY);
  termi.c_oflag &= ~OPOST;
  termi.c_lflag &= ~(ICANON |ECHO | ECHOE | ECHONL | ISIG ); 
  termi.c_cflag &= ~(CSIZE | PARENB);
  termi.c_cflag &= ~CRTSCTS;
  termi.c_cflag |= CS8;
  termi.c_cflag |= (CREAD | CLOCAL);
  termi.c_cflag |= B9600;
  termi.c_iflag &= ~(IGNBRK|BRKINT|PARMRK|ISTRIP|INLCR|IGNCR|ICRNL); 
  termi.c_cc[VMIN] = 0;
  termi.c_cc[VTIME] = 0;
  termi.c_cflag &= ~CSTOPB;
  tcsetattr(fd,TCSANOW, &termi);
  
  while(1){

    printf("\n Waiting for message...\n");
    sleep(3);
    read(fd,data,sizeof(data));
    if(data > 0)
    {

            for(int i=0;i<20;i++)
            {
                 printf("%c",data[i]);
            }
     
    }
    else
    {
      printf("Data not read");
    }

    memset(data,0,sizeof(data));
    
    sleep(1);
 
   
  }
  
  close(fd);
  return 0; 
}
