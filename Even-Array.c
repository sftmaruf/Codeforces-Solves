#include <stdio.h>

int main(){
	int testCases, temp; 
	scanf("%d", &testCases);
	int lengthOfArr;

	while(testCases--){
		int minMoves = 0;
		scanf("%d", &lengthOfArr);
		int a[lengthOfArr];
		
		for(int i = 0; i < lengthOfArr; i++){
			scanf("%d", &a[i]);
		}	

		for(int i = 0; i < lengthOfArr; i++){
			if(i % 2 == 0 && a[i] % 2 != 0){
				for(int j = i + 1; j < lengthOfArr; j++){
					if(j % 2 != 0 && a[j] % 2 == 0){
						temp = a[j];
						a[j] = a[i];
						a[i] = temp;
						minMoves++;
						break;
					}
				}
			}
			
			if(i % 2 != 0 && a[i] % 2 == 0){
				for(int j = i + 1; j < lengthOfArr; j++){
					if(j % 2 != 1 && a[j] % 2 != 0){
						temp = a[j];
						a[j] = a[i];
						a[i] = temp;
						minMoves++;
						break;
					}
				}
			}
		
		}
	
		for(int i = 0; i < lengthOfArr; i++){
			if(a[i] % 2 !=  i % 2){
				minMoves = -1;
				break;
			}
		}	
		printf("%d\n", minMoves);
	}
	return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/1367/B
//time-complexity -> O(m * n^2)  
