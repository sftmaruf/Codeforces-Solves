#include <stdio.h>

void printPrimes(int length){
	for(int i = 0; i < length; i++)
	{
		printf("2 ");
	}
}

int main(){
	int n, maxPossiblePrimes = 0;
	scanf("%d", &n);
	
	maxPossiblePrimes = n/2;
	printf("%d\n", maxPossiblePrimes);

	if(n%2 == 0)
	{
		printPrimes(maxPossiblePrimes);
	}
	else
	{
		printPrimes(maxPossiblePrimes - 1);
		printf("3");
	}
	
	printf("\n");
	return 0;
}
