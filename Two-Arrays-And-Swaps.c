#include <stdio.h>

int main(){
	int testCases, temp; 
	scanf("%d", &testCases);
	int numberOfElements, maximumNumberOfMoves;

	for(int l = 0; l < testCases; l++){
		int sum = 0;
		scanf("%d %d", &numberOfElements, &maximumNumberOfMoves);
		int a[numberOfElements], b[numberOfElements];

		for(int i = 0; i < numberOfElements; i++){
			scanf("%d", &a[i]);
		}

		for(int i = 0; i < numberOfElements; i++){
			scanf("%d", &b[i]);
		}

		for(int i = 0; i < numberOfElements; i++){
			for(int j = i + 1; j < numberOfElements; j++){
				if(a[i] > a[j]){
					temp = a[j];
					a[j] = 	a[i];
					a[i] = temp;
				}
			}

			for(int j = i + 1; j < numberOfElements; j++){
				if(b[i] < b[j]){
					temp = b[j];
					b[j] = b[i];
					b[i] = temp;
				}
			}
		}
		
		if(a[0] > b[0]){
			for(int i = 0; i < numberOfElements; i++){
				sum += a[i];
			}
		}else{
			for(int i = 0; i < maximumNumberOfMoves; i++){
				if(a[i] < b[i]){
					sum += b[i];
				}else{
					sum += a[i];
				}
			}
	
			for(int i = maximumNumberOfMoves; i < numberOfElements; i++){
				sum += a[i];
			}
		}
		printf("%d\n", sum);
	}	
	return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/1353/B 
//time-complexity -> O(n ^ 2)
