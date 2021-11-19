#include <stdio.h>

int main(){
	int nOfFriends, 
	    nOfBottle, 
	    amountOfDrinksEachBottle,
	    nOfLimes,
	    slicesOfEachLime,
	    amountOfSalt,
	    drinkNeedsForEachToast,
	    saltNeedsForEachToast;

	scanf("%d %d %d %d %d %d %d %d", &nOfFriends, &nOfBottle, &amountOfDrinksEachBottle,
		       	&nOfLimes, &slicesOfEachLime, &amountOfSalt, 
			&drinkNeedsForEachToast, &saltNeedsForEachToast);

	
	int totalAmountOfDrinks = nOfBottle * amountOfDrinksEachBottle;
	int totalSlicesOfLime = nOfLimes * slicesOfEachLime;
	int smallerAmountOfIngredients;

	smallerAmountOfIngredients = totalAmountOfDrinks/drinkNeedsForEachToast; 
	if(smallerAmountOfIngredients > amountOfSalt/saltNeedsForEachToast){
		smallerAmountOfIngredients = amountOfSalt/saltNeedsForEachToast;
	}

	if(smallerAmountOfIngredients > totalSlicesOfLime){
		smallerAmountOfIngredients = totalSlicesOfLime;
	}

	printf("%d", smallerAmountOfIngredients/nOfFriends);
	return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/151/A
//time-complexity -> O(1)
