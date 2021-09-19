#include <stdio.h>

int main(){
	int testCases, temp;
	scanf("%d", &testCases);
	

	while(testCases--){
		int nOfAthletes;
		scanf("%d", &nOfAthletes);	
		int strengths[nOfAthletes];

		for(int i = 0; i < nOfAthletes; i++){
			scanf("%d", &strengths[i]);
		}
		
		for(int i = 0; i < nOfAthletes; i++){
			for(int j = i + 1; j < nOfAthletes; j++){
				if(strengths[i] > strengths[j]){
					temp = strengths[i];
					strengths[i] = strengths[j];
					strengths[j] = temp;
				}
			}
		}

		int min = strengths[1] - strengths[0];
		for(int i = 2; i < nOfAthletes; i++){
			if(strengths[i] - strengths[i - 1] < min){
				min = strengths[i] - strengths[i - 1];
			}
		}
		printf("%d\n", min);
	}
	return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/1360/B
//time-complexity -> O(m * n^2)
