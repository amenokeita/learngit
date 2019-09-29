#include "uhead.h"
int main(){
	int data[UNUMBER];
	int j;
struct arg k;

	userrand(data,UNUMBER);
	show(data,UNUMBER);
    k=operate(data,UNUMBER);
	printf("sum of data = %d\n", usum(data,UNUMBER));
printf("ave of data = %lf\n", k.ave);

/*
printf("pai xv 1\n\n\n");
	arrsort(data,UNUMBER);
	arrout(data,UNUMBER);
printf("pai xv 2\n\n\n");
    arrsort2(data,UNUMBER);

*/

	return 0;
}
