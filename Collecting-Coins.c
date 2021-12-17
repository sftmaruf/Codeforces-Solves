#include <stdio.h>

int main(){
	int nOfTestCase, coinsOf[4];
	scanf("%d", &nOfTestCase);

	while(nOfTestCase--){
		int maxCoin = 0;
		for(int i = 0; i < 4; i++){
			scanf("%d", &coinsOf[i]);
			if(coinsOf[i] > maxCoin && i < 3) maxCoin = coinsOf[i];
		}

		for(int i = 0; i < 3; i++){
			coinsOf[3] -= maxCoin - coinsOf[i];
		}

		(coinsOf[3] >= 0 && coinsOf[3] % 3 == 0) ? printf("YES\n") : printf("NO\n");
	}
	return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/1294/A 
//time-complexity -> O(n)
