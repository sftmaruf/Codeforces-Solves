#include <stdio.h>

int main(){
	int nOfTestCases, testCase;
	scanf("%d", &nOfTestCases);

	while(nOfTestCases--){
		int i = 1, count = 0;
		scanf("%d", &testCase);
		
		while(i){
			if(i % 3 == 0){
			}else if(i % 10 == 3){
			}else{
				count++;
				if(count == testCase){
					printf("%d\n", i);
					break;
				}
			}
			i++;
		}	
	}
	return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/1560/A
//time-complexity -> O(m * n)
