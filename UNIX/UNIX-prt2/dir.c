#include <sys/types.h>
#include <sys/stat.h>
#include<sys/wait.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>

int main(int argc , char *argv[])
{
	int fd=open(argv[1],O_DIRECTORY);
	printf("%d",fd);
	return 0;
}
