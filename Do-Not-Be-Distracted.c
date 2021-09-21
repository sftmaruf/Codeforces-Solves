#include <stdio.h>

int main(){
	int testCases;
	scanf("%d", &testCases);
	int nOfDays;

	while(testCases--){
		int isSuspicious = 1;
		scanf("%d", &nOfDays);
		char str[nOfDays + 1];
		for(int i = 0; i <= nOfDays; i++){
			scanf("%c", &str[i]);
		}

		for(int i = 0; i <= nOfDays; i++){
			for(int j = i + 1; j <= nOfDays;){
				if(str[i] == str[j]){
					break;
				}else{
					j++;
					if(str[i] == str[j]){
						isSuspicious = -1;
						i = nOfDays;
						break;		
					}
				}
			}
		}

		isSuspicious == 1 
			? printf("YES\n")
			: printf("NO\n");
	}
	
	return 0;
}


//problem-link -> https://codeforces.com/problemset/problem/1520/A
//time-complexity -> O(m * n^2)    
