#include <stdio.h>
#include <stdlib.h>
static void __attribute__ ((constructor)) before_main(void)
{
	printf("Runing before main!\n");
}

int main(){
	printf("main!\n");
	return 0;
}
