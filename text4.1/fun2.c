#include "my.h"
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
   int i,j;
   for(i=0;i<n;i++){
    j=i;
   }
printf("a[%d]=%d\n", j,a[j]);
 }

