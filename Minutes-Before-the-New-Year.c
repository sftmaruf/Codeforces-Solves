#include <stdio.h>

int main(){
	int nOfTestCase, hour, minutes;
	scanf("%d", &nOfTestCase);

	while(nOfTestCase--){
		scanf("%d %d", &hour, &minutes);
		printf("%d\n", (24 * 60) - ((hour * 60) + minutes));
	}
	return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/1283/A
//time-complexity -> O(n)
