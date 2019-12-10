#include "my.h"

void * fun(void *arg)
{
	int i=9;
	printf("tid = %p\n",(unsigned int)pthread_self());
	printf("i=%d,&i=%p\n",i,&i);
	pthread_exit((void*)&i);
}

int main()
{
	pthread_t tid;
	int ret,**rv;
	ret=pthread_create(&tid,NULL,fun,NULL);
	if(ret !=0)
	{
		perror("dailed!\n");
		return -1;
	}
	pthread_join(tid,(void**)&rv);
	printf("rv=%d,%p\n",*rv,*rv);
	return 0;
}
