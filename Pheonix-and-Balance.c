#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int nOfTestCase, nOfCoin;
	scanf("%d", &nOfTestCase);

	for(int i = 0; i < nOfTestCase; i++){
		scanf("%d", &nOfCoin);
		int weights[nOfCoin], minDiff = 0, length = 0;
		
		for(int j = 1; j <= nOfCoin; j++){
			weights[j - 1] = pow(2.0, j);
			length++;
		}

		int count = 0, position = length - 2;
		while(count != length/2){
			minDiff += weights[position];
			weights[position] = 0;
			position--;
			count++;
		}

		for(int j = 0; j < length; j++){
			minDiff -= weights[j];
		}
	
		printf("%d\n", abs(minDiff));
	}

	return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/1348/A
//time-complexity -> O(m * n)
