#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
#include<fcntl.h>
#include<errno.h>
#include<stdlib.h>
#include<string.h>
#include<signal.h>
#include<time.h>
#include<sys/times.h>
#include<pthread.h>
struct sendval{
	int n;
	int s;
};
