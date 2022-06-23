#include <stdio.h>
#define N 100

int main(){
	
	int number;
	int pin[N];
	int i;
	
	
	printf("Give number: ");
	scanf("%d",&number);
	
	
	for(i=0;number>0;i++){
		pin[i]=number%2;
		number=number/2;
	}
	
	printf("Binary of given number: ");
	
	for(i=i-1;i>=0;i--)
		printf("%d",pin[i]);
	
}
