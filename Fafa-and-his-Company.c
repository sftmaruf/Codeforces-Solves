#include <stdio.h>

int main()
{
	int numberOfEmployees, numberOfWays = 1;
	scanf("%d", &numberOfEmployees);

	for(int numberOfLeader = 2; numberOfLeader <= numberOfEmployees/2; numberOfLeader++)
	{
		if((numberOfEmployees - numberOfLeader) % numberOfLeader == 0)
		{
			numberOfWays++;
		}	
	}

	printf("%d\n", numberOfWays);
	return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/935/A
//time-complexity -> O(log n)
