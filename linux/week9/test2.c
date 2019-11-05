#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
static void __attribute__ ((constructor)) before_main(void)
{
	printf("-1:Runing before main!\n");
}
static void __attribute__ ((destructor)) after_main(void)
{
	printf("9999:Runing after main!\n");
}

static void callback1()
{
	printf("1:running after main!\n");	
}
static void callback2()
{
	printf("2:running after main!\n");	
}
static void callback3()
{
	printf("3:running after main!\n");	
}
int main(){
	atexit(callback1);
	atexit(callback2);
	atexit(callback3);
	printf("test1:pid = %d,ppid = %d", getpid(), getppid());
	while(1)
		sleep(1);
	return 0;
}
