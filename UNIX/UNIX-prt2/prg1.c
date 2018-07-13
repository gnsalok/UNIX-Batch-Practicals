#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	if(argc!=3) return 1;
	int pd[2],fd,n,i=0,count=0;
	char str[100]={0},num[4];
	pipe(pd);
	switch(fork())
	{
		case -1:
			exit(1);
		case 0:
			fd=open(argv[2],O_WRONLY|O_CREAT|O_TRUNC,0640);
			while(read(pd[0],str,1)>0)
			{

				if(str[0]!='\n')
				{
					count++;	     
					write(fd,str,1);
				}
				else
				{
					sprintf(num,"%d",count);

					write(fd,num,strlen(num));
					write(fd,str,1);
					count=0;
				}
			}
		default:
			fd=open(argv[1],O_RDONLY);
			while((n=read(fd,str,100))>0)
			{
				for(i=0;i<n;i++)
				{
					if(str[i]==' ') str[i]='\n';
				}
				write(pd[1],str,n);
			}
	}
	return 0;
}
