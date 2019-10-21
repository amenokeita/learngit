#include "uhead.h"
int usum(int *a,int n)
{
	int sum=0,i;
	for(i=0;i<n;i++)
	 sum=sum+a[i];
	return sum;
}

void userrand(int *a,int n){
	int i;
	srand((int)time(0));
for(i=0;i<n;i++)
	a[i]=i+(int)(100.0*rand()/(RAND_MAX+1.0));
}

void show(int *a,int n){
int i;
for(i=0;i<n;i++)
printf("a[%d]=%d\n", i,a[i]);
}



void arrsort(int *a,int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){ 
			  int temp =a[j+1];
			  a[j+1] = a[j];
			  a[j] = temp;
			}
		}
	}
	
}
void arrout(int *a,int n){
   int i;
   for(i=0;i<n;i++){
    printf("a[%d]=%d\n", i,a[i]);
   }
 }

void arrsort2(int *a,int n){
int i,j;
for(i=0;i<n;i++){
	  for(j=i+1;j<n;j++){
		 
		  if(a[i]>a[j]){ 
		   int temp = a[j];
		   a[j] = a[i];
	        a[i] = temp;
		  }
	  }
	  
 
  }
  for(i=0;i<n;i++){
    printf("a[%d]=%d\n", i,a[i]);
  }
}

