#include <stdio.h>

int main(){
	int nOfTestCase, width, height, nOfFriends;
	scanf("%d", &nOfTestCase);
	
	while(nOfTestCase--){
		int totalPieces = 1;
		scanf("%d %d %d", &width, &height, &nOfFriends);
	
		while(width % 2 == 0 || height % 2 == 0)
		{
			if(width % 2 == 0)
			{
				width /= 2;
				totalPieces *= 2; 
			}

			if(height % 2 == 0){
			       	height /= 2;
				totalPieces *= 2;
			}
		}	

		if(totalPieces >= nOfFriends)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/1472/A
//time-complexity -> O(m * n)
