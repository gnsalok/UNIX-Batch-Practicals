#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#define BUFSIZE 100
int main(int argc, char *argv[])
{
	int fd,n;
	char buf[BUFSIZE+1];
	mkfifo("fifo", 0660);
	fd = open("fifo", O_RDWR);
  //      while(1)
//	{
	while((n = read(fd, buf, BUFSIZE))>0)
		write(1,buf,n);
//while((n=read(0,buf,BUFSIZE))>0)
//write(fd,buf,n);	
}

