#include "/home/rlk/text1/learngit/text4.1/my.h"
int main(){
	int data[UNUMBER];
	int j;
struct arg k;

	userrand(data,UNUMBER);
	show(data,UNUMBER);

	printf("sum of data = %d\n", usum(data,UNUMBER));



	arrsort(data,UNUMBER);
	arrout(data,UNUMBER);


	return 0;
}
