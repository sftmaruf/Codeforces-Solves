#include <stdio.h>

int main(){
	int testCase;
	scanf("%d", &testCase);
	int length, width, area;

	while(testCase--){
		scanf("%d %d", &length, &width);

		if(width == length){
			area = 2 * width;
			area *= area;
		}

		if(width < length){
			width *= 2;
			area = width * width;
			if(width < length){
				area = length * length;
			}
		}else if(length < width){
			length *= 2;
			area = length * length;
			if(length < width){
				area = width * width;
			}
		}
		printf("%d\n", area);
	}

	return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/1360/A 
//time-complexity -> O(n) 
