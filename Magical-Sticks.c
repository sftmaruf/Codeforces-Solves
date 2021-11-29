#include <stdio.h>
#include <math.h>

int main(){
	int nOfTestCase, nOfSticks;
       	scanf("%d", &nOfTestCase);	
	
	for(int i = 0; i < nOfTestCase; i++){
		scanf("%d", &nOfSticks);
     	  	printf("%d\n", (int)ceil(nOfSticks/2.0));
	}
	return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/1371/A
//time-complexity -> O(n)
