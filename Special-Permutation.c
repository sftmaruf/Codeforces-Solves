#include <stdio.h>

int main(){
	int nOfTestCase, length;
	scanf("%d", &nOfTestCase);

	while(nOfTestCase--){
		int lastNumber = -1;
		scanf("%d", &length);
		if(length % 2 != 0) 
		{
			lastNumber = length;
			length--;
		}

		for(int i = length; i >= 1; i--){
			if(lastNumber != -1 && i == 1){
				printf("%d ", lastNumber);
				lastNumber = 1;
				break;
			}
			printf("%d ", i);	
		}
		
		if(lastNumber != -1) printf("%d", lastNumber);
		printf("\n");
	}
	return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/1454/A
//time-complexity -> O(m * n)
