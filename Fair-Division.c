#include <stdio.h>

int main(){
	int nOfTestCase;
	scanf("%d", &nOfTestCase);
	
	while(nOfTestCase--){
		int nOfCandie;
		scanf("%d", &nOfCandie);
		int weightsOfCandies[nOfCandie], sumOfWeights = 0;

		for(int i = 0; i < nOfCandie; i++)
		{
			scanf("%d", &weightsOfCandies[i]);
			sumOfWeights += weightsOfCandies[i];
		}

		if(sumOfWeights % 2 != 0)
		{
			printf("NO\n");
			continue;
		}

		if(nOfCandie % 2 == 0)
		{
			printf("YES\n");
			continue;
		}

		if(nOfCandie % 2 != 0)
		{
			int nOfOne, nOfTwo;
			nOfOne = nOfTwo = 0;
		
			for(int i = 0; i < nOfCandie; i++)
			{
				(weightsOfCandies[i] == 1) ? nOfOne++ : nOfTwo++;
			}

			(sumOfWeights % 2 == 0 && nOfOne != 0 && nOfTwo != 0) 
				? printf("YES\n") 
				: printf("NO\n");
		}
	}
	return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/1472/B  
//time-complexity -> O(m * n)
