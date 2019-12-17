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
#include<semaphore.h>
#include<pthread.h>
#define LOOP 10000000
#define NUM 4
#define NT 100
#define WRITER_FIRST
