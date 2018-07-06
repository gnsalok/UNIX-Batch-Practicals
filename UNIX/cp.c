#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<errno.h>

void cpy(int instd , int outstd)
{
	char buf[BUFSIZ]={0};
	int n=0;
	while((n=read(instd,buf,BUFSIZ))>0)
		write(outstd,buf,n);
return;

}
int main(int argc , char* argv[])
{
	int f=0;
	if( argc < 3 || argc > 4)  return 1;
	if(argc == 4 && strcmp(argv[1],"-f")==0)
	{
		f=1;
	}
	int instd;
	if(( instd = open(argv[f+1],O_RDONLY))<0)
	{
		perror(argv[f+1]);
		return 1;
	}
	int outstd;
	if(f && (outstd=creat(argv[f+2],0600))<0)
	{
		perror(argv[f+2]);
		return 1;
	}
	else if(!f && (outstd=open(argv[f+2],O_WRONLY|O_CREAT|O_EXCL,0600))<0)
	{
		perror(argv[f+2]);
		return 1;
	}
	dup2(instd,0);
	dup2(outstd,1);
	close(instd);
	close(outstd);
	cpy(0,1);
	return 0;
}
