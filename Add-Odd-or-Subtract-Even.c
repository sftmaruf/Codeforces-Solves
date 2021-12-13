#include <stdio.h>

int main(){
	int nOfTestCase, firstNumber, secondNumber;
	scanf("%d", &nOfTestCase);

	while(nOfTestCase--){
		scanf("%d %d", &firstNumber, &secondNumber);

		if((firstNumber - secondNumber) == 0){
			printf("0\n");
			continue;
		}

		if(secondNumber > firstNumber){
			((secondNumber - firstNumber) % 2 != 0) ? printf("1\n") : printf("2\n");	
		}else{
			((firstNumber - secondNumber) % 2 != 0) ? printf("2\n") : printf("1\n");
		}
	}
	return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/1311/A
//time-complexity -> O(n)
