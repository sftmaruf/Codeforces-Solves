#include <stdio.h>

int main(){
	int nOfCitizen, largeNumber = 0, totalWelfareAmount = 0;
	scanf("%d", &nOfCitizen);
	int welfares[nOfCitizen]; 
	for(int i = 0; i < nOfCitizen; i++){
		scanf("%d", &welfares[i]);
		totalWelfareAmount += welfares[i];
		if(welfares[i] > largeNumber){
			largeNumber = welfares[i];
		}
	}

	printf("%d", (nOfCitizen * largeNumber) - totalWelfareAmount);
	return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/758/A
//time-complexity -> O(n)
