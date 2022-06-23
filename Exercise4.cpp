#include <stdio.h>
#define N 10

int maxValue(int pin[], int size){
	
	int i, max;
	max = pin[0];
	for(i=0;i<size;i++){
		if(pin[i] > max)
			max = pin[i];
		}
	return max;
}

int main(){
	
		int i,k=0;
		int	list[N];

		printf("Fill array with values\n");
		
		for(i=0;i<N;i++){
			scanf("%d",&list[i]);
				if(list[i] == 0)
					break;
				else
				k=k+1;
					continue;
		}
		
		printf("Largest number in given array is %d", maxValue(list,k));
		
}
