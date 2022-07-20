#include <stdio.h>

int findJuicyWorms(int juicyWorm, int worms[], int numberOfPiles)
{
	int left = 0, right = numberOfPiles;

	while(left <= right)
	{
		int mid = (left + right)/2;

		if (juicyWorm == worms[mid]) return mid + 1;
		if (mid == 0 && juicyWorm < worms[mid]) return mid + 1;
		
		if (juicyWorm < worms[mid] && juicyWorm > worms[mid - 1]) return mid + 1;
		else if (juicyWorm > worms[mid]) left = mid + 1;
		else right = mid -1;
	}
}

int main()
{
	int numberOfPiles, numberOfJuicyWorms;
	
	scanf("%d", &numberOfPiles);
	int worms[numberOfPiles];
	for(int i = 0; i < numberOfPiles; i++)
		scanf("%d", &worms[i]);

	scanf("%d", &numberOfJuicyWorms);
	int juicyWorms[numberOfJuicyWorms];
	for(int i = 0; i < numberOfJuicyWorms; i++)
		scanf("%d", &juicyWorms[i]);

	for(int i = 1; i < numberOfPiles; i++)
		worms[i] = worms[i] + worms[i - 1];

	for(int i = 0; i < numberOfJuicyWorms; i++)
	{
		printf("%d\n", findJuicyWorms(juicyWorms[i], worms, numberOfPiles - 1));
	}
	return 0;
}

// problem-link -> https://codeforces.com/problemset/problem/474/B
// time-complexity -> O(n)
