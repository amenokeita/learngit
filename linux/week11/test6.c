#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>

int main()
{
    int num = 2;
    int i,j;
	FILE* file;
	file=fopen("user.dat","user");
    pid_t pid,ret;
    for(i=0;i<num;i++)
    {
        pid = fork();
        if(pid==0 || pid==-1)
        {
            break;
        }
    }

    if(pid < 0)
    {
        printf("error fork\n");
        exit(1);
    }
for(j=0;j<=9;j++){
    if(pid == 0)//子进程
    {

        printf("子进程pid = %d + %d,对应的父进程pid = %d\n",getpid(),j,getppid());
        sleep(1);

    }
    
}
    if(pid > 0)//父进程
    {
        //阻塞等待任意子进程
        wait(NULL);
        printf("父进程pid = %d\n",getpid());
        exit(1);
    }
}

