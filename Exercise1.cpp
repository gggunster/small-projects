#include <stdio.h>
#define N 5

int main(){
	
	int list[N];
	int i;
	int *p = list;

	printf("Fill array with values\n");
		
	for(i=0;i<N;i++){
		scanf("%d",&list[i]);
	}
	printf("Given Array values with memory address: \n");
	
	for(i=0;i<N;i++){
		printf("value : %d ",*(list+i));
		printf(" memory address:%d\n",&list[i]);
	}
	
}
