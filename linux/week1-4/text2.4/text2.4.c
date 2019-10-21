#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	int i;
	printf("-------1:before calling---------\n");
    sleep(3);
	i=system("./proj1");
	printf("-------1:After calling---------\n");
	printf("1:return value = %d\n", i);
	printf("-------2:before calling---------\n");
    sleep(3);
	i=system("./proj2");
	printf("-------2:After calling---------\n");
	printf("1:return value = %d\n", i);
 return 0;

}
