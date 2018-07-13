#include<fcntl.h>
#include<sys/shm.h>
#include<sys/ipc.h>
#include<unistd.h>
#include<errno.h>
#include<stdio.h>
int main(int argc , char* argv[])
{
int key,id,fd,n;
void *data;
char str[101];
key=ftok(".",10);
id=shmget(key,1000,0);
data=shmat(id,(void*)0,0);
//printf("%s\n",(char*)data);
//shmdt(data);
fd=open(argv[1],O_WRONLY|O_CREAT|O_TRUNC,0666);
//printf("%d\n",fd);
//while((n=read((int*)data,str,100))>0)
write(fd,(char*)data,1000);
shmdt(data);
shmctl(id,IPC_RMID,NULL);
return 0;
}
