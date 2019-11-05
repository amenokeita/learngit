#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
int x=100;
int main()
{
	int y=0;
	static int w=33;
	printf("text1:pid=%d,ppid=%d\n", getpid(),getppid());
	printf("text1:address x=%ld,y=%ld,w=%ld\n", &x,&y,&w);
	sleep(2);
	return 0;
}
