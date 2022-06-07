#include <stdio.h>
#include <stdlib.h>

void solve(int arr1[], int arr2[], int length1, int length2)
{
	int minPairs = 0;
	for(int i = 0; i < length1; i++)
	{
		for(int j = 0; j < length2; j++)
		{
			if(arr1[i] > -1 && arr2[j] >-1 && abs(arr1[i] - arr2[j]) <= 1)
			{
				arr2[j] = -1;
				minPairs++;
				break;
			}

		}
	}
	printf("%d\n",  minPairs);

}

void sort(int arr[], int length)
{
	for(int i = 0; i < length; i++)
	{
		for(int j = i + 1; j < length; j++)
		{
			if(arr[j] < arr[i])
			{
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
}

void input(int arr[], int length)
{
	for(int i = 0; i < length; i++) scanf("%d", &arr[i]);
}

int main()
{
	int numberOfBoys, numberOfGirls;

	scanf("%d", &numberOfBoys);
	int boysSkills[numberOfBoys];
	input(boysSkills, numberOfBoys);
	scanf("%d", &numberOfGirls);
	int girlsSkills[numberOfGirls];
	input(girlsSkills, numberOfGirls);

	sort(boysSkills, numberOfBoys);
	sort(girlsSkills, numberOfGirls);



	if(numberOfBoys < numberOfGirls)
	{
		solve(boysSkills, girlsSkills, numberOfBoys, numberOfGirls);
	}
	else
	{
		solve(girlsSkills, boysSkills, numberOfGirls, numberOfBoys); 
	}	
	return 0;
}

// problem-link -> https://codeforces.com/problemset/problem/489/B
// time-complexity -> O(n^2)
