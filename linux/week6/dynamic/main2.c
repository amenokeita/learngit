#include "/home/rlk/text1/learngit/week6/static/mylib.h"
#include <dlfcn.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
	int a[5] = {12, 2464, -425, 45, 342};

	void * handle;
	int (*f1)();
	int (*f2)();
	int (*f3)();
	char *error;
	handle = dlopen("/home/rlk/text1/learngit/week6/static/libmy.so",RTLD_LAZY);
	if(!handle)
	{
		perror("load failed!\n");
		exit(1);
	}
	f1=dlsym(handle, "show");
	if((error=dlerror())!=NULL)
	{
		fprintf(stderr, "%s\n", error);
		exit(1);
	}
	f2=dlsym(handle, "max");
	if((error=dlerror())!=NULL)
	{
		fprintf(stderr, "%s\n", error);
		exit(1);
	}
	f3=dlsym(handle, "sum");
	if((error=dlerror())!=NULL)
	{
		fprintf(stderr, "%s\n", error);
		exit(1);
	}


	show (a, 5);
	printf("max=%d\n", max(a, 5));
	printf("sum=%d\n", sum(a, 5));
	return 0;
}
