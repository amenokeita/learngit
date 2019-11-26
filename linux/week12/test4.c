#include "my.h"

int main()
{
	int pid,fd[2],len;
	char buf[1024*64];
	FILE *stream;
	if(pipe(fd)!=0)
	{
		fprintf(stderr,"pipe create failed!\nnerror reason = %s\n",strerror(errno));
		return -1;
	}
	pid = fork();
	if(pid<0)
	{
		fprintf(stderr,"fork create failed!\nnerror reason = %s\n",strerror(errno));
		return -1;
	}
	else if(pid==0)
	{
		close(fd[1]);
		dup2(fd[0],0);
		close(fd[0]);
		if(execl("/bin/cat","cat",NULL,NULL)==-1)
		{
			fprintf(stderr,"execl failed!\nnerror reason = %s\n",strerror(errno));
			return -3;
		}
		exit(0);
	}
	else
	{
		close(fd[0]);
		printf("you can type aline and the line will echied\n");
		dup2(fd[1],1);
		while(gets(buf)!=NULL)
			puts(buf);
	}
}
