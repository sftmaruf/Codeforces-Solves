#include <stdio.h>
#include <math.h>

int main(){
	int nOfTestCase;
	long nOfBurles, oneThird, twoThird;
	scanf("%d", &nOfTestCase);

	while(nOfTestCase--){
		scanf("%ld", &nOfBurles);
		oneThird = ceil(nOfBurles/3.0);
		twoThird = (nOfBurles - oneThird)/2;

		if(oneThird + (twoThird * 2) == nOfBurles){
			printf("%ld %ld\n", oneThird, twoThird);
		}else{
			printf("%ld %ld\n", twoThird, oneThird);
		}
	}
	return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/1551/A
//time-complexity -> O(n)
