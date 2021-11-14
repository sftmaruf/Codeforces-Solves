#include <stdio.h>

int main(){
	int nOfTestCase, lengthOfArr, index, 
	    countNum1, countNum2;
	scanf("%d", &nOfTestCase);

	while(nOfTestCase--){
		countNum1 = countNum2 = 0;
		scanf("%d", &lengthOfArr);
		int arr[lengthOfArr];
	
		for(int i = 1; i <= lengthOfArr; i++){
			scanf("%d", &arr[i]);
		}
		

		for(int i = 1; i <= lengthOfArr; i++){
			if(arr[i] == arr[1]){
				countNum1 += 1;
			}else{
				countNum2 += 1;
			}
		}

		if(countNum1 < countNum2){
			printf("%d\n", 1);	
		}else{
			for(int i = 1; i <= lengthOfArr; i++){
				if(arr[i] != arr[1]){
					printf("%d\n", i);
					break;
				}
			}
		}
	}

	return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/1512/A
//time-complexity -> O(n^2)
