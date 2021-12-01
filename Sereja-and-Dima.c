#include <stdio.h>
#include <stdbool.h>

int main(){
	int nOfCard, pointOfSereja, pointOfDima;
	bool isSerejaTurn = true;
	pointOfSereja = pointOfDima = 0;
	scanf("%d", &nOfCard);
	int cards[nOfCard];

	for(int i = 0; i < nOfCard; i++){
		scanf("%d", &cards[i]);
	}

	for(int i = 0; i < nOfCard;){
		if(cards[i] > cards[nOfCard - 1]){
			if(isSerejaTurn){
				pointOfSereja += cards[i];
				isSerejaTurn = false;
			}else{
				pointOfDima += cards[i];
				isSerejaTurn = true;
			}
			i++;
		}else{
			if(isSerejaTurn){
				pointOfSereja += cards[nOfCard - 1];
				isSerejaTurn = false;
			}else{
				pointOfDima += cards[nOfCard - 1];
				isSerejaTurn = true;
			}
			nOfCard--;
		}
	}

	printf("%d %d\n", pointOfSereja, pointOfDima);
	return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/381/A
//time-complexity -> O(m * n)
