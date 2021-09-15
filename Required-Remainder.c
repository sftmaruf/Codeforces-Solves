#include <stdio.h>

int main(){
	int testCases, x, y, n, mod;
	scanf("%d", &testCases);

	for(int i = 0; i < testCases; i++){
		scanf("%d %d %d", &x, &y, &n);
		if(n%x != y){
			if(n < x && y == 0){
				n = 0;
			}else{
				mod = n%x;
				mod = mod > y 
					? mod - y 
					: mod + (x - y);
				n -= mod;
				
			}
		}
		printf("%d\n", n);
	}

	return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/1374/A
//time-complexity -> O(n)
