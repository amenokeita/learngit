#include "uhead.h"
int main(){
	int data[UNUMBER];
	int j;
	userrand(data,UNUMBER);
	show(data,UNUMBER);
	printf("sum of data = %d\n", usum(data,UNUMBER));
	
	return 0;
}
