#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<fcntl.h>
#include<errno.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int _pipe[2];
    if(pipe(_pipe) == -1)
    {
        perror("pipe");
        return 1;
    }
    int ret;
    int count = 0;
    int flag = fcntl(_pipe[1],F_GETFL);
    fcntl(_pipe[1],F_SETFL,flag|O_NONBLOCK);
    while(1)
    {
        ret = write(_pipe[1],"b",1);
        if(ret == -1)
        {
            printf("error %s\n",strerror(errno));
            break;
        }
        count++;
    }
    printf("count = %d\n",count);

}

