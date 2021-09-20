#include <stdio.h>

int main(){
	int roundOfGames, mishkaPoints, chrisPoints, mishkaWins = 0, chrisWins = 0;
	scanf("%d", &roundOfGames);

	while(roundOfGames--){
		scanf("%d %d", &mishkaPoints, &chrisPoints);
		if(mishkaPoints < chrisPoints){
		 	chrisWins += 1;
		}

		if(mishkaPoints > chrisPoints){
			mishkaWins += 1;
		}
	}

	if(chrisWins < mishkaWins){
		printf("Mishka\n");
	}else if (mishkaWins < chrisWins){
		printf ("Chris\n");
	}else{
		printf("Friendship is magic!^^\n");
	}

	return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/703/A
//time-complexity -> O(n)
