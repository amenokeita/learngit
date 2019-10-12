#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define UNUMBER 100
struct arg{
	float ave;
	int sum;

};
int usum(int *,int);
void show(int *,int);
void userrand(int *,int);
struct arg operate(int *,int);
