#include <stdio.h>

int main(){
	int testCases, singleInt, maxGCD;
	scanf("%d", &testCases);

	while(testCases--){
		scanf("%d", &singleInt);
		if(singleInt % 2 == 0){
			maxGCD = singleInt / 2;
		}else{
			maxGCD = (singleInt - 1) / 2;
		}
		printf("%d\n", maxGCD);
	}
	return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/1370/A
//time-complexity -> O(n)
