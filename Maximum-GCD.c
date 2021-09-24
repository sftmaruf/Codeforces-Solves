#include <stdio.h>

int main(){
	int testCases, singleInt, max = 0, greatestCommonDivisor;
	scanf("%d", &testCases);

	while(testCases--){
		scanf("%d", &singleInt);
		if(singleInt % 2 == 0){
			greatestCommonDivisor = singleInt / 2;
		}else{
			greatestCommonDivisor = (singleInt - 1) / 2;
		}
		printf("%d\n", greatestCommonDivisor);
	}
	return 0;
}
