#include <stdio.h>

void sort(long int positions[], int numberOfLanterns)
{
	for(int i = 0; i < numberOfLanterns; i++)
	{
		for(int j = i + 1; j < numberOfLanterns; j++)
		{
			if(positions[j] < positions[i])
			{
				long int temp = positions[j];
				positions[j] = positions[i];
				positions[i] = temp;
			}	
		}
	}
}

int main()
{
	int numberOfLanterns;
        long int lengthOfStreet;
       	long int max = -1;
	scanf("%d %ld", &numberOfLanterns, &lengthOfStreet);
	long int positions[numberOfLanterns];
	for(int i = 0 ; i < numberOfLanterns; i++)
	{
		scanf("%ld", &positions[i]);
	}

	sort(positions, numberOfLanterns);
	if(positions[0] != 0) max = 2L * positions[0];
	if(positions[numberOfLanterns - 1] != lengthOfStreet)
	{
		long int tempMax = 2L * (lengthOfStreet - positions[numberOfLanterns - 1]);
		if(tempMax > max) max =  tempMax;
	}

	for(int i = 1; i < numberOfLanterns; i++)
	{
		long int distance = positions[i] - positions[i - 1]; 
		if(distance > max)
		{
			max = distance;
		}
	}
	printf("%f\n", max/2.0);
	return 0;
}

// problem-link -> https://codeforces.com/problemset/problem/492/B
// time-complexity -> O(n^2)
