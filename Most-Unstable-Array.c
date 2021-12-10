#include <stdio.h>

int main(){
	int nOfTestCase, length, sum;
	scanf("%d", &nOfTestCase);

	while(nOfTestCase--){
		int maxValue = 0;
		scanf("%d %d", &length, &sum);
		if(length == 2) maxValue = sum;
		if(length > 2) maxValue = sum * 2;
		printf("%d\n", maxValue);
	}
	return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/1353/A
//time-complexity -> O(n) 
