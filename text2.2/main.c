#include "uhead.h"
int main(){
	int data[UNUMBER];
	int j;
	userrand(data,UNUMBER);
	show(data,UNUMBER);
	printf("sum of data = %d\n", usum(data,UNUMBER));
printf("pai xv 1\n\n\n");
	arrsort(data,UNUMBER);
	arrout(data,UNUMBER);
printf("pai xv 2\n\n\n");
    arrsort2(data,UNUMBER);



	return 0;
}
