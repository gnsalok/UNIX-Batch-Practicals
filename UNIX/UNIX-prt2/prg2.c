#include<fcntl.h>
#include<sys/shm.h>
#include<sys/ipc.h>
#include<unistd.h>
#include<errno.h>
#include<stdio.h>
#include<string.h>
int main(int argc , char* argv[])
{
int key,id,fd;
void *data;
key=ftok(".",10);
id=shmget(key,1000,IPC_CREAT|0744);
data=shmat(id,(void*)0,0);
//printf("%d\n",key);
fd=open(argv[1],O_RDONLY);
//printf("%d\n",id);
read(fd,data,1000);
//printf("%s",(char*)data);
//strcpy((char*)data,"hello world\n");
return 0;
}
